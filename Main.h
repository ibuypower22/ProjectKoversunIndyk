#pragma once

#include "Info.h"
#include "Windows.h"
#include "Developers.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		static Main^ obj;
	private: System::Windows::Forms::Button^ button1;
	public:
		String^ potok;
	private: System::Windows::Forms::Button^ button4;
	public:

		String^ name;
		String^ surname;
		String^ encrypt(String^ input);
		void writetofile(StreamWriter^ sw, String^ text, int ping);
		Main(void)
		{
			InitializeComponent();
			obj = this;
		}
		Main(StreamWriter^ sw)
		{
			InitializeComponent();
		}

	public: int latency(TextBox^ textBox);
	protected:

		~Main()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(230, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(325, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Поточна затримка (мс)";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(310, 127);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(165, 165);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(336, 179);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 54);
			this->label2->TabIndex = 3;
			this->label2->Text = L"10";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(237, 305);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(311, 31);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Введіть повідомлення";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Azure;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(253, 346);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(278, 35);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Main::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Azure;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(225, 403);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(163, 44);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Відправити";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Main::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Azure;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(394, 403);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(161, 44);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Скасувати";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Main::button3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(745, 0);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(36, 39);
			this->button1->TabIndex = 17;
			this->button1->Text = L"x";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &Main::button1_MouseLeave);
			this->button1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::button1_MouseMove);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(3, 6);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(40, 40);
			this->button4->TabIndex = 18;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Main::button4_Click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(784, 561);
			this->ControlBox = false;
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Location = System::Drawing::Point(110, 250);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(800, 600);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"Main";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Головна";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->TextLength == 0) { MessageBox::Show("Вы не ввели сообщение, попробуйте еще раз"); }
	else 
	{
		int ping = latency(textBox1);
		label2->Text = ping.ToString();
		String^ s = textBox1->Text;
		FileStream^ f = gcnew FileStream(potok, FileMode::Append, FileAccess::Write);
		StreamWriter^ sw = gcnew StreamWriter(f);
		String^ crypt=encrypt(s);
		Sleep(ping);
		writetofile(sw,crypt,ping);
		sw->Close();
		f->Close();
		textBox1->Text = "";
		MessageBox::Show("Сообщение отправлено!");
	}
}
	
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	label2->Text = "10";
}
private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
	Info^ f3 = gcnew Info();
	f3->potok = potok;
	f3->label5->Text = name + " " + surname;
	f3->Show();
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	int ping = latency(textBox1);
	label2->Text = ping.ToString();
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}

private: System::Void button1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	button1->ForeColor = System::Drawing::Color::Azure;
}

private: System::Void button1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	button1->ForeColor = System::Drawing::Color::Black;
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Developers^ f4 = gcnew Developers();
	f4->Show();
}
};
} 
