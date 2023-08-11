/*
* Alex Reilly
* Server Console file
*/

#include "pch.h"
#using "system.dll"
using namespace System;
using namespace System::IO;
using namespace System::Net;
using namespace System::Net::Sockets;
#include <cstdlib>  //for system("PAUSE")
#include "ServiceConsole.cpp"

int main(array<String^>^ argv)
{
    int port = 9999;
	Socket^ serverSocket;
	IPAddress^ ipAddress =
	     (IPAddress ^)Dns::GetHostEntry(Dns::GetHostName())->AddressList[0];
    IPEndPoint^ ipEndpoint = gcnew IPEndPoint(ipAddress, port);
	Socket^ listenerSocket = gcnew Socket(ipAddress ->AddressFamily,
                                SocketType::Stream, ProtocolType::Tcp);
    listenerSocket->Bind(ipEndpoint);         
    listenerSocket->Listen(3);     // the max length of the queue of
                                   // clients waiting for connection is 1
	Console::WriteLine("Server waiting for connections");
	int count = 1;
	while (true){		
		serverSocket = listenerSocket->Accept();
		Console::Write("New connection accepted");
		Service^ service = gcnew Service(serverSocket);
		Thread^ childThread = gcnew Thread(gcnew ThreadStart(service, &Service::DoService));
		childThread ->Name = "t" + count;
		Console::WriteLine(", server thread is t" + count);
		childThread->Start();
		count++;
	}	
}











