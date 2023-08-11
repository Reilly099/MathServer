#pragma once

/*
* Alex Reilly
* The main math practice form
* IMPORTANT: DEFAULT USERNAME IS: Admin
*            DEFAULT PASSWORD IS: Password
*/

#include <random>
#include "helpForm.h"
#include "Incorrect.h"

namespace My240P1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net::Sockets;
	using namespace System::Threading;
	using namespace System::Net;
	using namespace System::IO;
	using namespace System::Security::Cryptography;
	using namespace System::Text;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ EquationBox;
	private: System::Windows::Forms::TextBox^ val1;

	private: System::Windows::Forms::Button^ bEx;
	private: System::Windows::Forms::Button^ BCheck;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ BoxResponse;

	private: System::Windows::Forms::TextBox^ val2;



	private: System::Windows::Forms::GroupBox^ Grade;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ signBox;

	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ BAdd;
	private: System::Windows::Forms::GroupBox^ Operation;
	private: System::Windows::Forms::RadioButton^ grade3;
	private: System::Windows::Forms::RadioButton^ mulBut;
	private: System::Windows::Forms::GroupBox^ summary;
	private: System::Windows::Forms::TextBox^ incorBox;

	private: System::Windows::Forms::TextBox^ corBox;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::Label^ AnswerLabel;
	private: System::Windows::Forms::Label^ HintLabel;
	private: System::Windows::Forms::Button^ HintBut;
	private: System::Windows::Forms::Button^ AnswerBut;
	private: System::Windows::Forms::Button^ connectBtn;








	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		// SERVER
		int port;
		int messageCount;
		IPAddress^ ipAddress;
		IPEndPoint^ ipEndpoint;
		Socket^ clientSocket;
		NetworkStream^ netStream;
		BinaryReader^ br;

		// ENCRYPTION
		RSACryptoServiceProvider^ csp;
		RSAParameters privateKey;
		SHA1CryptoServiceProvider^ sha;

	private: System::Windows::Forms::Button^ btnDisconnect;
	private: System::Windows::Forms::Button^ CCbtn;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ UserBox;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ PassBox;



















		   BinaryWriter^ bw;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->EquationBox = (gcnew System::Windows::Forms::GroupBox());
			this->CCbtn = (gcnew System::Windows::Forms::Button());
			this->btnDisconnect = (gcnew System::Windows::Forms::Button());
			this->connectBtn = (gcnew System::Windows::Forms::Button());
			this->AnswerLabel = (gcnew System::Windows::Forms::Label());
			this->HintLabel = (gcnew System::Windows::Forms::Label());
			this->HintBut = (gcnew System::Windows::Forms::Button());
			this->AnswerBut = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->signBox = (gcnew System::Windows::Forms::PictureBox());
			this->bEx = (gcnew System::Windows::Forms::Button());
			this->BCheck = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->BoxResponse = (gcnew System::Windows::Forms::TextBox());
			this->val2 = (gcnew System::Windows::Forms::TextBox());
			this->val1 = (gcnew System::Windows::Forms::TextBox());
			this->Grade = (gcnew System::Windows::Forms::GroupBox());
			this->grade3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->BAdd = (gcnew System::Windows::Forms::RadioButton());
			this->Operation = (gcnew System::Windows::Forms::GroupBox());
			this->mulBut = (gcnew System::Windows::Forms::RadioButton());
			this->summary = (gcnew System::Windows::Forms::GroupBox());
			this->incorBox = (gcnew System::Windows::Forms::TextBox());
			this->corBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->UserBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->PassBox = (gcnew System::Windows::Forms::TextBox());
			this->EquationBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->signBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->Grade->SuspendLayout();
			this->Operation->SuspendLayout();
			this->summary->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// EquationBox
			// 
			this->EquationBox->Controls->Add(this->CCbtn);
			this->EquationBox->Controls->Add(this->btnDisconnect);
			this->EquationBox->Controls->Add(this->connectBtn);
			this->EquationBox->Controls->Add(this->AnswerLabel);
			this->EquationBox->Controls->Add(this->HintLabel);
			this->EquationBox->Controls->Add(this->HintBut);
			this->EquationBox->Controls->Add(this->AnswerBut);
			this->EquationBox->Controls->Add(this->pictureBox3);
			this->EquationBox->Controls->Add(this->signBox);
			this->EquationBox->Controls->Add(this->bEx);
			this->EquationBox->Controls->Add(this->BCheck);
			this->EquationBox->Controls->Add(this->pictureBox1);
			this->EquationBox->Controls->Add(this->BoxResponse);
			this->EquationBox->Controls->Add(this->val2);
			this->EquationBox->Controls->Add(this->val1);
			this->EquationBox->Location = System::Drawing::Point(33, 33);
			this->EquationBox->Name = L"EquationBox";
			this->EquationBox->Size = System::Drawing::Size(844, 235);
			this->EquationBox->TabIndex = 0;
			this->EquationBox->TabStop = false;
			this->EquationBox->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// CCbtn
			// 
			this->CCbtn->Enabled = false;
			this->CCbtn->Location = System::Drawing::Point(547, 202);
			this->CCbtn->Name = L"CCbtn";
			this->CCbtn->Size = System::Drawing::Size(130, 34);
			this->CCbtn->TabIndex = 16;
			this->CCbtn->Text = L"Clear Console";
			this->CCbtn->UseVisualStyleBackColor = true;
			this->CCbtn->Click += gcnew System::EventHandler(this, &MyForm::CCbtn_Click);
			// 
			// btnDisconnect
			// 
			this->btnDisconnect->Enabled = false;
			this->btnDisconnect->Location = System::Drawing::Point(683, 201);
			this->btnDisconnect->Name = L"btnDisconnect";
			this->btnDisconnect->Size = System::Drawing::Size(155, 35);
			this->btnDisconnect->TabIndex = 15;
			this->btnDisconnect->Text = L"Disconnect";
			this->btnDisconnect->UseVisualStyleBackColor = true;
			this->btnDisconnect->Click += gcnew System::EventHandler(this, &MyForm::btnDisconnect_Click);
			// 
			// connectBtn
			// 
			this->connectBtn->Location = System::Drawing::Point(683, 158);
			this->connectBtn->Name = L"connectBtn";
			this->connectBtn->Size = System::Drawing::Size(155, 35);
			this->connectBtn->TabIndex = 14;
			this->connectBtn->Text = L"Connect";
			this->connectBtn->UseVisualStyleBackColor = true;
			this->connectBtn->Click += gcnew System::EventHandler(this, &MyForm::connectBtn_Click);
			// 
			// AnswerLabel
			// 
			this->AnswerLabel->AutoSize = true;
			this->AnswerLabel->Location = System::Drawing::Point(110, 158);
			this->AnswerLabel->Name = L"AnswerLabel";
			this->AnswerLabel->Size = System::Drawing::Size(0, 20);
			this->AnswerLabel->TabIndex = 13;
			this->AnswerLabel->Visible = false;
			// 
			// HintLabel
			// 
			this->HintLabel->AutoSize = true;
			this->HintLabel->Location = System::Drawing::Point(110, 201);
			this->HintLabel->Name = L"HintLabel";
			this->HintLabel->Size = System::Drawing::Size(0, 20);
			this->HintLabel->TabIndex = 12;
			this->HintLabel->Visible = false;
			// 
			// HintBut
			// 
			this->HintBut->Enabled = false;
			this->HintBut->Location = System::Drawing::Point(16, 194);
			this->HintBut->Name = L"HintBut";
			this->HintBut->Size = System::Drawing::Size(75, 35);
			this->HintBut->TabIndex = 11;
			this->HintBut->Text = L"Hint";
			this->HintBut->UseVisualStyleBackColor = true;
			this->HintBut->Click += gcnew System::EventHandler(this, &MyForm::HintBut_Click);
			// 
			// AnswerBut
			// 
			this->AnswerBut->Enabled = false;
			this->AnswerBut->Location = System::Drawing::Point(16, 151);
			this->AnswerBut->Name = L"AnswerBut";
			this->AnswerBut->Size = System::Drawing::Size(75, 35);
			this->AnswerBut->TabIndex = 10;
			this->AnswerBut->Text = L"Answer";
			this->AnswerBut->UseVisualStyleBackColor = true;
			this->AnswerBut->Click += gcnew System::EventHandler(this, &MyForm::AnswerBut_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(331, 49);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(71, 61);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			// 
			// signBox
			// 
			this->signBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"signBox.Image")));
			this->signBox->Location = System::Drawing::Point(124, 49);
			this->signBox->Name = L"signBox";
			this->signBox->Size = System::Drawing::Size(71, 61);
			this->signBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->signBox->TabIndex = 8;
			this->signBox->TabStop = false;
			// 
			// bEx
			// 
			this->bEx->Location = System::Drawing::Point(683, 76);
			this->bEx->Name = L"bEx";
			this->bEx->Size = System::Drawing::Size(155, 34);
			this->bEx->TabIndex = 1;
			this->bEx->Text = L"Exit";
			this->bEx->UseVisualStyleBackColor = true;
			this->bEx->Click += gcnew System::EventHandler(this, &MyForm::bEx_Click);
			// 
			// BCheck
			// 
			this->BCheck->Enabled = false;
			this->BCheck->Location = System::Drawing::Point(683, 36);
			this->BCheck->Name = L"BCheck";
			this->BCheck->Size = System::Drawing::Size(155, 34);
			this->BCheck->TabIndex = 6;
			this->BCheck->Text = L"Check Answer";
			this->BCheck->UseVisualStyleBackColor = true;
			this->BCheck->Click += gcnew System::EventHandler(this, &MyForm::BCheck_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(558, 49);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 61);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// BoxResponse
			// 
			this->BoxResponse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BoxResponse->Location = System::Drawing::Point(408, 44);
			this->BoxResponse->Name = L"BoxResponse";
			this->BoxResponse->Size = System::Drawing::Size(144, 71);
			this->BoxResponse->TabIndex = 4;
			this->BoxResponse->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// val2
			// 
			this->val2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->val2->Location = System::Drawing::Point(201, 49);
			this->val2->Multiline = true;
			this->val2->Name = L"val2";
			this->val2->ReadOnly = true;
			this->val2->Size = System::Drawing::Size(124, 71);
			this->val2->TabIndex = 2;
			this->val2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// val1
			// 
			this->val1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->val1->Location = System::Drawing::Point(6, 49);
			this->val1->Multiline = true;
			this->val1->Name = L"val1";
			this->val1->ReadOnly = true;
			this->val1->Size = System::Drawing::Size(112, 71);
			this->val1->TabIndex = 0;
			this->val1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// Grade
			// 
			this->Grade->Controls->Add(this->grade3);
			this->Grade->Controls->Add(this->radioButton2);
			this->Grade->Controls->Add(this->radioButton1);
			this->Grade->Location = System::Drawing::Point(33, 307);
			this->Grade->Name = L"Grade";
			this->Grade->Size = System::Drawing::Size(218, 155);
			this->Grade->TabIndex = 1;
			this->Grade->TabStop = false;
			this->Grade->Text = L"Grade";
			this->Grade->Visible = false;
			// 
			// grade3
			// 
			this->grade3->AutoSize = true;
			this->grade3->Location = System::Drawing::Point(6, 109);
			this->grade3->Name = L"grade3";
			this->grade3->Size = System::Drawing::Size(173, 24);
			this->grade3->TabIndex = 2;
			this->grade3->Text = L"Grade 3 (100 - 999)";
			this->grade3->UseVisualStyleBackColor = true;
			this->grade3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::grade3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 68);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(155, 24);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"Grade 2 (10 - 99)";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(6, 25);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(146, 24);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Grade 1 (1 - 10)";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 68);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(116, 24);
			this->radioButton3->TabIndex = 1;
			this->radioButton3->Text = L"Subtraction";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// BAdd
			// 
			this->BAdd->AutoSize = true;
			this->BAdd->Checked = true;
			this->BAdd->Location = System::Drawing::Point(6, 25);
			this->BAdd->Name = L"BAdd";
			this->BAdd->Size = System::Drawing::Size(92, 24);
			this->BAdd->TabIndex = 0;
			this->BAdd->TabStop = true;
			this->BAdd->Text = L"Addition";
			this->BAdd->UseVisualStyleBackColor = true;
			this->BAdd->CheckedChanged += gcnew System::EventHandler(this, &MyForm::BAdd_CheckedChanged);
			// 
			// Operation
			// 
			this->Operation->Controls->Add(this->mulBut);
			this->Operation->Controls->Add(this->radioButton3);
			this->Operation->Controls->Add(this->BAdd);
			this->Operation->Location = System::Drawing::Point(312, 307);
			this->Operation->Name = L"Operation";
			this->Operation->Size = System::Drawing::Size(254, 155);
			this->Operation->TabIndex = 2;
			this->Operation->TabStop = false;
			this->Operation->Text = L"Operation";
			this->Operation->Visible = false;
			// 
			// mulBut
			// 
			this->mulBut->AutoSize = true;
			this->mulBut->Location = System::Drawing::Point(6, 109);
			this->mulBut->Name = L"mulBut";
			this->mulBut->Size = System::Drawing::Size(221, 24);
			this->mulBut->TabIndex = 2;
			this->mulBut->Text = L"Multiplication (No Grade 3)";
			this->mulBut->UseVisualStyleBackColor = true;
			this->mulBut->CheckedChanged += gcnew System::EventHandler(this, &MyForm::mulBut_CheckedChanged);
			// 
			// summary
			// 
			this->summary->Controls->Add(this->incorBox);
			this->summary->Controls->Add(this->corBox);
			this->summary->Controls->Add(this->label2);
			this->summary->Controls->Add(this->label1);
			this->summary->Location = System::Drawing::Point(604, 346);
			this->summary->Name = L"summary";
			this->summary->Size = System::Drawing::Size(249, 116);
			this->summary->TabIndex = 5;
			this->summary->TabStop = false;
			this->summary->Visible = false;
			// 
			// incorBox
			// 
			this->incorBox->Location = System::Drawing::Point(146, 68);
			this->incorBox->Name = L"incorBox";
			this->incorBox->ReadOnly = true;
			this->incorBox->Size = System::Drawing::Size(79, 26);
			this->incorBox->TabIndex = 3;
			// 
			// corBox
			// 
			this->corBox->Location = System::Drawing::Point(6, 68);
			this->corBox->Name = L"corBox";
			this->corBox->ReadOnly = true;
			this->corBox->Size = System::Drawing::Size(79, 26);
			this->corBox->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(142, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Incorrect";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Correct";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(604, 316);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(157, 24);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"Display Summary";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1085, 36);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->helpToolStripMenuItem });
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(78, 32);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(151, 34);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::helpToolStripMenuItem_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(883, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 20);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Username: ";
			// 
			// UserBox
			// 
			this->UserBox->Location = System::Drawing::Point(883, 71);
			this->UserBox->Name = L"UserBox";
			this->UserBox->Size = System::Drawing::Size(100, 26);
			this->UserBox->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(883, 116);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Password: ";
			// 
			// PassBox
			// 
			this->PassBox->Location = System::Drawing::Point(883, 139);
			this->PassBox->Name = L"PassBox";
			this->PassBox->Size = System::Drawing::Size(100, 26);
			this->PassBox->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1085, 491);
			this->Controls->Add(this->PassBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->UserBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->summary);
			this->Controls->Add(this->Operation);
			this->Controls->Add(this->Grade);
			this->Controls->Add(this->EquationBox);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Math Practice";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->EquationBox->ResumeLayout(false);
			this->EquationBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->signBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->Grade->ResumeLayout(false);
			this->Grade->PerformLayout();
			this->Operation->ResumeLayout(false);
			this->Operation->PerformLayout();
			this->summary->ResumeLayout(false);
			this->summary->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion

		int dig1; // Fist dig
		int dig2; // Second dig
		int response; // User Response
		char mode; // either A(add), S(Sub), or M(Mul)
		int cor = 0; // number correct
		int incor = 0; // number incorrect
		char grade; // grade setting

		bool debug = false; // for the debug setting
		int chance;
		char corruption;


		/*
		* Sends an encrypted string to the server as well as an encrypted hash
		* @param s: string to be encrypted and sent
		*/
void sendString(String^ s) {
	array<Byte>^ hashed = sha->ComputeHash(Convert::FromBase64String(padMessage(s)));
	bw->Write(encrypt(s));
	//bw->Write(encrypt(Convert::ToBase64String(hashed))); cannot do as it is no longer base 64
	array<Byte>^ cypher = csp->Encrypt(hashed, false);
	bw->Write(cypher->Length);
	bw->Write(cypher);
}
/*
* Sets the values of the digits based off of
* selected grade
*/
void setVals() {
	sendString("SetValues");
	//bw->Write("SetValues");
	sendInt(grade); //bw->Write(grade);
	sendInt(mode); // both of these work as char is a numeric value
	//bw->Write(mode);
	dig1 = br->ReadInt32();
	dig2 = br->ReadInt32();
	this->val1->Text = dig1.ToString();
	this->val2->Text = dig2.ToString();
}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	/*
	* Loads the form
	* Initializes grade to 1, sets values and displays them
	* Sets mode to addition
	*/
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		grade = '1';
		//setVals();
		//this->val1->Text = dig1.ToString();
		//this->val2->Text = dig2.ToString();
		corBox->Text = cor.ToString();
		incorBox->Text = incor.ToString();

		mode = 'A';
		
	}

		   /*
		   * Sends an encrypted int to the server as well as a hash
		   * @param val: value to be encrypted and sent
		   */
void sendInt(int val) {
	String^ S = val.ToString();
	array<Byte>^ hashed = sha->ComputeHash(Convert::FromBase64String(padMessage(S)));
	bw->Write(encrypt(S));
	//bw->Write(encrypt(Convert::ToBase64String(hashed))); cannot do as it is no longer base 64
	array<Byte>^ cypher = csp->Encrypt(hashed, false);
	bw->Write(cypher->Length);
	bw->Write(cypher);
	}

private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

/*
* Grade 2 button
* sets grade to 2, blanks out hint and answer labels
* as well as user input
*/
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	grade = '2';
	mulBut->Visible = true;
	setVals();
	this->BoxResponse->Text = "";
	this->AnswerLabel->Text = ""; // if answer was shown
	this->AnswerLabel->Visible = false;
	this->HintLabel->Text = ""; // if hint was shown
	this->HintLabel->Visible = false;
}

/*
* Grade 1 button
* Does same as above, except its grade 1 setting
*/
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	grade = '1';
	mulBut->Visible = true;
	setVals();
	this->BoxResponse->Text = "";
	this->AnswerLabel->Text = ""; // if answer was shown
	this->AnswerLabel->Visible = false;
	this->HintLabel->Text = ""; // if hint was shown
	this->HintLabel->Visible = false;
}

/* Grade 3 button
* does same as above, however will blank out the multiplication option
* and select addition if its currently selected
*/
private: System::Void grade3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	grade = '3';
	mulBut->Visible = false; // multiplication is too much for these values
	if (mulBut->Checked) {
		this->BAdd->Checked = true; // switch back to add mode
		mode = 'A';
	}
	setVals();
	this->BoxResponse->Text = "";
	this->AnswerLabel->Text = ""; // if answer was shown
	this->AnswerLabel->Visible = false;
	this->HintLabel->Text = ""; // if hint was shown
	this->HintLabel->Visible = false;
}

/*
* The check answer button
* Checks the answer, will pop up a window if necessary
*/
private: System::Void BCheck_Click(System::Object^ sender, System::EventArgs^ e) {
	bool correct = false;
	Int32::TryParse(BoxResponse->Text, response); // input to int
	int corAnswer;
	switch(mode) {
	case 'A':
		sendString("Add");
		//bw->Write("Add");
		break;
	case 'S':
		sendString("Subtract");
		//bw->Write("Subtract");
		break;
	case 'M':
		sendString("Multiply");
		//bw->Write("Multiply");
		break;
	}
	sendInt(dig1); // bw->Write(dig1);
	sendInt(dig2); // bw->Write(dig2);
	corAnswer = br->ReadInt32();
	if (corAnswer == response) {
		cor += 1;
		corBox->Text = cor.ToString();
		this->pictureBox1->Image = Image::FromFile("SmilingFace.png");
		setVals();
		correct = true;
	}
	else {
		incor += 1;
		incorBox->Text = incor.ToString();
		this->pictureBox1->Image = Image::FromFile("NeutralFace.gif");
		setVals();
	}
	this->BoxResponse->Text = "";
	this->AnswerLabel->Text = ""; // if answer was shown
	this->AnswerLabel->Visible = false;
	this->HintLabel->Text = ""; // if hint was shown
	this->HintLabel->Visible = false;
	if (!correct) {
		Incorrect^ i = gcnew Incorrect();
		i->ShowDialog();
	}
}

/*
* Exit button, closes the form
*/
private: System::Void bEx_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

/*
* Addition button, selects addition (and blanks out hint, answer, and response)
*/
private: System::Void BAdd_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	mode = 'A';
	this->signBox->Image = Image::FromFile("add.png");
	setVals();
	this->BoxResponse->Text = "";
	this->AnswerLabel->Text = ""; // if answer was shown
	this->AnswerLabel->Visible = false;
	this->HintLabel->Text = ""; // if hint was shown
	this->HintLabel->Visible = false;
}
/*
* Subtraction button, selects subtraction
*/
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	mode = 'S';
	this->signBox->Image = Image::FromFile("Sub.png");
	setVals();
	this->BoxResponse->Text = "";
	this->AnswerLabel->Text = ""; // if answer was shown
	this->AnswerLabel->Visible = false;
	this->HintLabel->Text = ""; // if hint was shown
	this->HintLabel->Visible = false;
}
/*
* Multiplication button selects multiplication
*/
private: System::Void mulBut_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	mode = 'M';
	this->signBox->Image = Image::FromFile("mul.png");
	setVals();
	this->BoxResponse->Text = "";
	this->AnswerLabel->Text = ""; // if answer was shown
	this->AnswerLabel->Visible = false;
	this->HintLabel->Text = ""; // if hint was shown
	this->HintLabel->Visible = false;
}

/*
* Displays the summary if checked
*/
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox1->Checked) {
		this->summary->Visible = true;
	}
	else {
		this->summary->Visible = false;
	}
}
/*
* Brings up the help window
*/
private: System::Void helpToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	helpForm ^h = gcnew helpForm();
	h->Show();
}
/*
* The answer button, reveals the answer
*/
private: System::Void AnswerBut_Click(System::Object^ sender, System::EventArgs^ e) {
	int answer;
	switch (mode) {
	case 'A':
		sendString("Add");
		//bw->Write("Add");
		break;
	case 'S':
		sendString("Subtract");
		//bw->Write("Subtract");
		break;
	case 'M':
		sendString("Multiply");
		//bw->Write("Multiply");
		break;
	}
	sendInt(dig1); // bw->Write(dig1);
	sendInt(dig2); // bw->Write(dig2);
	answer = br->ReadInt32();
	this->AnswerLabel->Text = answer.ToString();
	AnswerLabel->Visible = true;
}
/*
* The hint button, reveals the last digit
*/
private: System::Void HintBut_Click(System::Object^ sender, System::EventArgs^ e) {
	int answer;
	switch (mode) {
	case 'A':
		sendString("Add");
		//bw->Write("Add");
		break;
	case 'S':
		sendString("Subtract");
		//bw->Write("Subtract");
		break;
	case 'M':
		sendString("Multiply");
		//bw->Write("Multiply");
		break;
	}
	sendInt(dig1); // bw->Write(dig1);
	sendInt(dig2); // bw->Write(dig2);
	answer = br->ReadInt32();
	int lastDig = answer % 10;
	this->HintLabel->Text = String::Concat("The last digit is: ", lastDig.ToString());
	this->HintLabel->Visible = true;
}

	   /*
	   * Pads the message for encryption
	   * @param s: message to be padded
	   * @return padded Message
	   */
String^ padMessage(String^ s) {
	int len = 4 - s->Length % 4; // legnth needed to pad to multiple of 4
	return s->PadRight(s->Length + len, '/');
	}

String^ encrypt(String^ text) {
	//csp->ImportParameters(publicKey);
	text = padMessage(text);
	array<unsigned char>^ data = Convert::FromBase64String(text);
	array<Byte>^ cypher = csp->Encrypt(data, false);
	return Convert::ToBase64String(cypher);
}

/*
* The connect to server button
*/
private: System::Void connectBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	port = 9999;
	ipAddress = Dns::GetHostEntry(Dns::GetHostName())->AddressList[0];
	ipEndpoint = gcnew IPEndPoint(ipAddress, port);
	//clientSocket = gcnew Socket(AddressFamily::InterNetwork,
	clientSocket = gcnew Socket(ipAddress->AddressFamily,
		SocketType::Stream, ProtocolType::Tcp);
	clientSocket->Connect(ipEndpoint);
	netStream = gcnew NetworkStream(clientSocket);
	br = gcnew BinaryReader(netStream);
	bw = gcnew BinaryWriter(netStream);
	connectBtn->Enabled = false;

	String^ confirmation = br->ReadString();

	// ENCRYPTION
	csp = gcnew RSACryptoServiceProvider();

	int n1 = br->ReadInt32();
	array<Byte>^ pk = br->ReadBytes(n1);
	int n2 = br->ReadInt32();
	array<Byte>^ exponent = br->ReadBytes(n2);


	RSAParameters PublicKey;
	PublicKey.Modulus = pk;
	PublicKey.Exponent = exponent;
	csp->ImportParameters(PublicKey);
	sha = gcnew SHA1CryptoServiceProvider();

	bool connected = false;
	// ensure username and password boxes have values
	if (!(String::IsNullOrEmpty(UserBox->Text)) && !(String::IsNullOrEmpty(PassBox->Text))) { 
		sendString("Login");
		sendString(UserBox->Text);
		sendString(PassBox->Text);
		String^ cont = br->ReadString();
		if (cont == "GOOD") { // login successfull
			connected = true;
		}
	}

	if (!connected) {
		sendString("Quit"); // login failed, disconnect from server
		clientSocket->Shutdown(SocketShutdown::Both);
		clientSocket->Close();
		netStream->Close();
		connectBtn->Enabled = true;
	}
	else {
		btnDisconnect->Enabled = true;
		Grade->Visible = true;
		Operation->Visible = true;
		BCheck->Enabled = true;
		bEx->Enabled = false;
		AnswerBut->Enabled = true;
		HintBut->Enabled = true;

		setVals();
		CCbtn->Enabled = true;
	}

}
/*
* The disconnect from server button
*/
private: System::Void btnDisconnect_Click(System::Object^ sender, System::EventArgs^ e) {
	sendString("Quit");
	//bw->Write("Quit");
	//Thread::Sleep(3000);
	clientSocket->Shutdown(SocketShutdown::Both);
	clientSocket->Close();
	netStream->Close();
	connectBtn->Enabled = true;
	btnDisconnect->Enabled = false;
	Grade->Visible = false;
	Operation->Visible = false;
	BCheck->Enabled = false;
	bEx->Enabled = true;
	AnswerBut->Enabled = false;
	HintBut->Enabled = false;
	CCbtn->Enabled = false;
}
/*
* The clear console button
* clears the console
*/
private: System::Void CCbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	sendString("ClearConsole");
	//bw->Write("ClearConsole");
}

private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
