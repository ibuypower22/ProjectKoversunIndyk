#pragma once
#include <iostream>
#include <string>
#include "Exceptions.h"
#include "Functions.h"
#include "Files.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;

	public ref class Info : public System::Windows::Forms::Form
	{
	public:
		String^ potok;
		bool sortflag = true;
		String^ namesurname;
		Info(void)
		{
			InitializeComponent();
		}
	protected:

		~Info()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Info::typeid));
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->BackColor = System::Drawing::Color::Transparent;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold));
			   this->label1->Location = System::Drawing::Point(188, 9);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(408, 31);
			   this->label1->TabIndex = 1;
			   this->label1->Text = L"Інформація про ваші нотатки";
			   this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(550, 209);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(165, 165);
			   this->pictureBox1->TabIndex = 3;
			   this->pictureBox1->TabStop = false;
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->BackColor = System::Drawing::Color::Transparent;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label3->Location = System::Drawing::Point(493, 171);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(267, 31);
			   this->label3->TabIndex = 5;
			   this->label3->Text = L"Середня затримка";
			   // 
			   // textBox1
			   // 
			   this->textBox1->BackColor = System::Drawing::Color::Azure;
			   this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->textBox1->Location = System::Drawing::Point(12, 107);
			   this->textBox1->Multiline = true;
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->ReadOnly = true;
			   this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			   this->textBox1->Size = System::Drawing::Size(381, 267);
			   this->textBox1->TabIndex = 8;
			   // 
			   // label2
			   // 
			   this->label2->BackColor = System::Drawing::Color::Transparent;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label2->Location = System::Drawing::Point(576, 261);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(118, 54);
			   this->label2->TabIndex = 10;
			   this->label2->Text = L"0";
			   this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->BackColor = System::Drawing::Color::Transparent;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label4->Location = System::Drawing::Point(282, 396);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(221, 31);
			   this->label4->TabIndex = 11;
			   this->label4->Text = L"Знайти нотатку";
			   // 
			   // textBox2
			   // 
			   this->textBox2->BackColor = System::Drawing::Color::Azure;
			   this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->textBox2->Location = System::Drawing::Point(263, 444);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(258, 35);
			   this->textBox2->TabIndex = 12;
			   // 
			   // button3
			   // 
			   this->button3->BackColor = System::Drawing::Color::Azure;
			   this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button3->FlatAppearance->BorderSize = 0;
			   this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button3->Location = System::Drawing::Point(314, 500);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(157, 44);
			   this->button3->TabIndex = 13;
			   this->button3->Text = L"Пошук";
			   this->button3->UseVisualStyleBackColor = false;
			   this->button3->Click += gcnew System::EventHandler(this, &Info::button3_Click);
			   // 
			   // label5
			   // 
			   this->label5->BackColor = System::Drawing::Color::Transparent;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label5->ForeColor = System::Drawing::Color::Indigo;
			   this->label5->Location = System::Drawing::Point(0, 51);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(784, 36);
			   this->label5->TabIndex = 14;
			   this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::Transparent;
			   this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			   this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button1->FlatAppearance->BorderSize = 0;
			   this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			   this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button1->Location = System::Drawing::Point(592, 92);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(80, 80);
			   this->button1->TabIndex = 15;
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &Info::button1_Click);
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::Color::Transparent;
			   this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button2->FlatAppearance->BorderSize = 0;
			   this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			   this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			   this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button2->Location = System::Drawing::Point(745, 0);
			   this->button2->Margin = System::Windows::Forms::Padding(0);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(36, 39);
			   this->button2->TabIndex = 16;
			   this->button2->Text = L"x";
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Click += gcnew System::EventHandler(this, &Info::button2_Click);
			   this->button2->MouseLeave += gcnew System::EventHandler(this, &Info::button2_MouseLeave);
			   this->button2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Info::button2_MouseMove);
			   // 
			   // button4
			   // 
			   this->button4->BackColor = System::Drawing::Color::Azure;
			   this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button4->FlatAppearance->BorderSize = 0;
			   this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button4->Location = System::Drawing::Point(12, 387);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(149, 40);
			   this->button4->TabIndex = 17;
			   this->button4->Text = L"Сортувати";
			   this->button4->UseVisualStyleBackColor = false;
			   this->button4->Click += gcnew System::EventHandler(this, &Info::button4_Click);
			   // 
			   // Info
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->AutoScroll = true;
			   this->BackColor = System::Drawing::SystemColors::Control;
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->ClientSize = System::Drawing::Size(784, 561);
			   this->ControlBox = false;
			   this->Controls->Add(this->button4);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->label1);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			   this->Location = System::Drawing::Point(1000, 250);
			   this->MaximizeBox = false;
			   this->MaximumSize = System::Drawing::Size(800, 600);
			   this->MinimizeBox = false;
			   this->MinimumSize = System::Drawing::Size(800, 600);
			   this->Name = L"Info";
			   this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			   this->ShowIcon = false;
			   this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			   this->Text = L"Інформація";
			   this->Load += gcnew System::EventHandler(this, &Info::Info_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		textBox1->Text = "";
		try {
			if (!File::Exists(potok))
			{
				throw Exceptions(1);
			}
			else {
				textBox1->AppendText("Message;Ping" + Environment::NewLine);
				textBox1->AppendText(Files::readfromcsv(potok));
				label2->Text = Functions::avglatency(textBox1->Text);
			}
		}
		catch (...) {}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button2_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		button2->ForeColor = System::Drawing::Color::Azure;
	}
	private: System::Void button2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		button2->ForeColor = System::Drawing::Color::Black;
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = textBox1->Text;
		String^ searchtext = textBox2->Text;
		try
		{
			if (!File::Exists(potok))
			{
				throw Exceptions(1);
			}
			else
				if (searchtext == "") { throw Exceptions(3); }
				else
				{
					Functions::search(potok, text, searchtext);
				}
		}
		catch (...) {}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (!File::Exists(potok))
			{
				throw Exceptions(1);
			}
			else
			{
				if (sortflag)
				{
					String^ text = textBox1->Text;
					cli::array<String^>^ sentences = Functions::downsort(text);
					textBox1->Text = "";
					for (int i = 0; i < sentences->Length - 2; i += 2)
					{
						textBox1->AppendText(sentences[i] + ";" + sentences[i + 1] + Environment::NewLine);
					}
					sortflag = false;
				}
				else
				{
					String^ text = textBox1->Text;
					cli::array<String^>^ sentences = Functions::upsort(text);
					textBox1->Text = "";
					for (int i = 0; i < sentences->Length - 2; i += 2)
					{
						textBox1->AppendText(sentences[i] + ";" + sentences[i + 1] + Environment::NewLine);
					}
					sortflag = true;
				}
			}
		}
		catch (...) {}
	}
	private: System::Void Info_Load(System::Object^ sender, System::EventArgs^ e) {
		label5->Text = namesurname;
	}
};
}
