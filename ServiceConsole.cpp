/*
* Alex Reilly
* Server Service Console
*/
#include "pch.h"
#pragma once
//#include "stdafx.h"
#using "system.dll"
#include <random>

#define USERNAME "Admin"
#define PASSWORD "Password"

using namespace System;
using namespace System::IO;
using namespace System::Net;
using namespace System::Net::Sockets;
using namespace System::Threading;
using namespace System::Security::Cryptography;
using namespace System::Xml::Serialization;
using namespace System::Text;

public ref class Service{
	private: Socket^ serverSocket;
			 NetworkStream^ netStream;
			 BinaryReader^ br;
			 BinaryWriter^ bw;
			 int dig1, dig2, grade, res;
			 char mode;

			 RSACryptoServiceProvider^ csp; // for cryptography
			 RSAParameters privateKey;
			 RSAParameters publicKey;
			 SHA1CryptoServiceProvider^ sha; // for hashing message digests

	/*
	* returns xml output for the public key
	* @return string from of public key
	*/
	public: String^ getPublicKey() {
		StringWriter^ sw = gcnew StringWriter();
	    XmlSerializer^ xs = gcnew XmlSerializer(RSAParameters::typeid);
	    xs->Serialize(sw, publicKey);
	    return sw->ToString();
	}
	/*
	* returns xml output for the private key
	* @return string from of private key
	*/
	public: String^ getPrivateKey() {
	    StringWriter^ sw = gcnew StringWriter();
        XmlSerializer^ xs = gcnew XmlSerializer(RSAParameters::typeid);
        xs->Serialize(sw, privateKey);
        return sw->ToString();
	}

	/*
    * Pads the message for encryption
	* In this case this is used for comparing hashes
	* as the hashed values sent are padded to be base64 strings
	* @param s: message to be padded
	* @return padded Message
	*/
String^ padMessage(String^ s) {
	int len = 4 - s->Length % 4; // legnth needed to pad to multiple of 4
	return s->PadRight(s->Length + len, '/');
	}
	/*
	* Removes the '/' character from the padded message
	* @param s: string to be depadded
	* @return clean string
	*/
	String^ dePad(String^ s) {
		int pos;
		for (int x = 0; x < s->Length; x++) {
			if (s[x] == '/') {
				pos = x;
				break;
			}
		}
		return s->Substring(0, pos);
	}
	/*
	* Decrypts the message
	* @param cypher: the encrypted message
	* @return string from of message
	*/
	String^ decrypt(String^ text) {
		array<Byte>^ cypher = Convert::FromBase64String(text);
		csp->ImportParameters(privateKey);
		array<Byte>^ res = csp->Decrypt(cypher, false);
		return dePad(Convert::ToBase64String(res));
	}

	/*
	* Receives and processes an encrypted string from the client
	* @return the decrypted string
	*/
public: String^ receiveString() {
	String^ cypher = br->ReadString();
	if (!cypher->Length == 0) { // not sure why but sometimes it receives blank commands, this
		String^ message = decrypt(cypher); // fixes it
		Console::WriteLine("Decrypted Message: {0}", message);
		int hashLen = br->ReadInt32();
		array<Byte>^ hashed = br->ReadBytes(hashLen);
		hashed = csp->Decrypt(hashed, false);
		Console::WriteLine("Hashed value Received: {0}", Convert::ToBase64String(hashed));
		// Hashed message is padded before being sent, therefore to compute the hash on the 
		// server end, it must be padded as well
		array<Byte>^ newHashed = sha->ComputeHash(Convert::FromBase64String(padMessage(message)));
		Console::WriteLine("Hashed value computed: {0}", Convert::ToBase64String(newHashed));
		if (Convert::ToBase64String(hashed) == Convert::ToBase64String(newHashed)) {
			Console::WriteLine("Hashes Match: Data Valid");
		}
		else {
			Console::WriteLine("Hash mismatch: Corrupted data received!");
		}
		return message;
	}
	}
/*
* Function to receive incryped int from the client
* @return: decrypted integer value
*/
public: int receiveInt() {
	int reception;
	String^ cypher = br->ReadString();
	//Console::WriteLine("Encrypted Integer: {0}", cypher);
	String^ message = decrypt(cypher);
	Console::WriteLine("Decrypted Integer: {0}", message);
	reception = Int32::Parse(message);
	int hashLen = br->ReadInt32();
	array<Byte>^ hashed = br->ReadBytes(hashLen);
	hashed = csp->Decrypt(hashed, false);
	Console::WriteLine("Hashed value Received: {0}", Convert::ToBase64String(hashed));
	// Hashed message is padded before being sent, therefore to compute the hash on the 
	// server end, it must be padded as well
	array<Byte>^ newHashed = sha->ComputeHash(Convert::FromBase64String(padMessage(message)));
	Console::WriteLine("Hashed value computed: {0}", Convert::ToBase64String(newHashed));
	if (Convert::ToBase64String(hashed) == Convert::ToBase64String(newHashed)) {
		Console::WriteLine("Hashes Match: Data Valid");
	}
	else {
		Console::WriteLine("Hash mismatch: Corrupted data received!");
	}
	return reception;
}
			
	public: Service(Socket^ aSocket){
				serverSocket = aSocket;
				netStream = gcnew NetworkStream(serverSocket);
				br = gcnew BinaryReader(netStream);
				bw = gcnew BinaryWriter(netStream);
				csp = gcnew RSACryptoServiceProvider(2048);
				privateKey = csp->ExportParameters(true);
				publicKey = csp->ExportParameters(false);
				sha = gcnew SHA1CryptoServiceProvider();
			}
			void DoService(){
				String^ threadName = Thread::CurrentThread->Name;
				bw -> Write(threadName + ": Client connected.");

				array<Byte>^ pk = publicKey.Modulus;
				array<Byte>^ exponent = publicKey.Exponent;

				bw->Write(pk->Length);
				bw->Write(pk);
				bw->Write(exponent->Length);
				bw->Write(exponent);

				//receiveString();

				try {
					String^ command;
					
					while (true) //until end of input
					{
						command = receiveString();
						//command = br->ReadString();
						if (command == "SetValues") { // set the values and return to client
							Console::WriteLine("Received Command: {0}", command);
							grade = receiveInt(); // br->ReadInt32();
							mode = receiveInt(); // Both work as char is numeric
							//mode = br->ReadChar();
							switch (grade) {
							case '1':
								dig1 = rand() % 10;
								dig2 = rand() % 10;
								break;
							case '2':
								dig1 = rand() % 100;
								dig2 = rand() % 100;

								if (dig1 < 10) {
									dig1 += 10;
								}

								if (dig2 < 10) {
									dig2 += 10;
								}
								break;
							case '3':
								dig1 = rand() % 1000;
								dig2 = rand() % 1000;

								if (dig1 < 100) {
									dig1 += 100;
								}

								if (dig2 < 100) {
									dig2 += 100;
								}
								break;
							}
							if (mode == 'S' && dig2 > dig1) { // no negative values
								int temp = dig2;
								dig2 = dig1;
								dig1 = temp;
							}
							bw->Write(dig1);
							bw->Write(dig2);
							Console::WriteLine("Set Values: {0}, {1}", dig1, dig2);
						}
						else if (command == "Add") { // add 2 vals return result
							Console::WriteLine("Received Command: {0}", command);
							dig1 = receiveInt(); //br->ReadInt32();
							dig2 = receiveInt(); //br->ReadInt32();
							res = dig1 + dig2;
							bw->Write(res);
							Console::WriteLine("{0} + {1} = {2}", dig1, dig2, res);
						}
						else if (command == "Subtract") { // sub 2 vals return result to client
							Console::WriteLine("Received Command: {0}", command);
							dig1 = receiveInt(); //br->ReadInt32();
							dig2 = receiveInt(); //br->ReadInt32();
							res = dig1 - dig2;
							bw->Write(res);
							Console::WriteLine("{0} - {1} = {2}", dig1, dig2, res);
						}
						else if (command == "Multiply") { // multiply two vals return result to client
							Console::WriteLine("Received Command: {0}", command);
							dig1 = receiveInt(); //br->ReadInt32();
							dig2 = receiveInt(); //br->ReadInt32();
							res = dig1 * dig2;
							bw->Write(res);
							Console::WriteLine("{0} * {1} = {2}", dig1, dig2, res);
						}
						else if (command == "Quit") { // quit command, terminate
							Console::WriteLine("Received Command " + command); 
							Console::WriteLine("Disconnecting " + threadName + "...");
							netStream->Close();
							return;
						}
						else if (command == "ClearConsole") { // clear server console
							Console::WriteLine("Clearing Console...");
							Thread::Sleep(1000);
							Console::Clear();
						}
						else if (command == "Login") { // Client login
							Console::WriteLine("Received Command " + command);
							String^ Username = receiveString();
							String^ Password = receiveString();
							if (Username == USERNAME && Password == PASSWORD) {
								bw->Write("GOOD");
								Console::WriteLine("Successful login from {0}", threadName);
							}
							else {
								bw->Write("BAD");
								Console::WriteLine("Failed login from {0}", threadName);
							}

						}
					}
				}
				catch (EndOfStreamException^ e){ //client finished
					netStream->Close();
					Console::WriteLine(threadName + " disconnected."); 
				}
				catch (IOException^ e) { // forefull exit
					netStream->Close();
					Console::WriteLine(threadName + " forcefully exited.");
				}
				
			}
};