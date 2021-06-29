#pragma once

namespace PuzzleGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;


	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Label^ TotalClicks;



	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Label^ label2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->TotalClicks = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoSize = true;
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(10, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1342, 93);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 45, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label1->Location = System::Drawing::Point(4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1335, 93);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Puzzle Game";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->button1);
			this->flowLayoutPanel1->Controls->Add(this->button2);
			this->flowLayoutPanel1->Controls->Add(this->button3);
			this->flowLayoutPanel1->Controls->Add(this->button4);
			this->flowLayoutPanel1->Controls->Add(this->button5);
			this->flowLayoutPanel1->Controls->Add(this->button6);
			this->flowLayoutPanel1->Controls->Add(this->button7);
			this->flowLayoutPanel1->Controls->Add(this->button8);
			this->flowLayoutPanel1->Controls->Add(this->button9);
			this->flowLayoutPanel1->Controls->Add(this->button10);
			this->flowLayoutPanel1->Controls->Add(this->button11);
			this->flowLayoutPanel1->Controls->Add(this->button12);
			this->flowLayoutPanel1->Controls->Add(this->button16);
			this->flowLayoutPanel1->Controls->Add(this->button17);
			this->flowLayoutPanel1->Controls->Add(this->button18);
			this->flowLayoutPanel1->Controls->Add(this->button19);
			this->flowLayoutPanel1->Location = System::Drawing::Point(11, 120);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(550, 590);
			this->flowLayoutPanel1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DarkBlue;
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 139);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::DarkBlue;
			this->button2->Location = System::Drawing::Point(140, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 139);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::DarkBlue;
			this->button3->Location = System::Drawing::Point(277, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(131, 139);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::DarkBlue;
			this->button4->Location = System::Drawing::Point(414, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(131, 139);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::DarkBlue;
			this->button5->Location = System::Drawing::Point(3, 148);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(131, 139);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::DarkBlue;
			this->button6->Location = System::Drawing::Point(140, 148);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(131, 139);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::DarkBlue;
			this->button7->Location = System::Drawing::Point(277, 148);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(131, 139);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::DarkBlue;
			this->button8->Location = System::Drawing::Point(414, 148);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(131, 139);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::DarkBlue;
			this->button9->Location = System::Drawing::Point(3, 293);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(131, 139);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::DarkBlue;
			this->button10->Location = System::Drawing::Point(140, 293);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(131, 139);
			this->button10->TabIndex = 9;
			this->button10->Text = L"10";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::DarkBlue;
			this->button11->Location = System::Drawing::Point(277, 293);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(131, 139);
			this->button11->TabIndex = 10;
			this->button11->Text = L"11";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::DarkBlue;
			this->button12->Location = System::Drawing::Point(414, 293);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(131, 139);
			this->button12->TabIndex = 11;
			this->button12->Text = L"12";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::DarkBlue;
			this->button16->Location = System::Drawing::Point(3, 438);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(131, 139);
			this->button16->TabIndex = 12;
			this->button16->Text = L"13";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::DarkBlue;
			this->button17->Location = System::Drawing::Point(140, 438);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(131, 139);
			this->button17->TabIndex = 13;
			this->button17->Text = L"14";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::DarkBlue;
			this->button18->Location = System::Drawing::Point(277, 438);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(131, 139);
			this->button18->TabIndex = 14;
			this->button18->Text = L"15";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::DarkBlue;
			this->button19->Location = System::Drawing::Point(414, 438);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(131, 139);
			this->button19->TabIndex = 15;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->TotalClicks);
			this->flowLayoutPanel2->Controls->Add(this->label2);
			this->flowLayoutPanel2->Location = System::Drawing::Point(567, 120);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(350, 590);
			this->flowLayoutPanel2->TabIndex = 2;
			this->flowLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::flowLayoutPanel2_Paint);
			// 
			// TotalClicks
			// 
			this->TotalClicks->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->TotalClicks->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->TotalClicks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TotalClicks->ForeColor = System::Drawing::Color::MidnightBlue;
			this->TotalClicks->Location = System::Drawing::Point(3, 0);
			this->TotalClicks->Name = L"TotalClicks";
			this->TotalClicks->Size = System::Drawing::Size(347, 307);
			this->TotalClicks->TabIndex = 1;
			this->TotalClicks->Text = L"Total Clicks";
			this->TotalClicks->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label2->Location = System::Drawing::Point(3, 307);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(347, 270);
			this->label2->TabIndex = 2;
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->Controls->Add(this->button13);
			this->flowLayoutPanel3->Controls->Add(this->button14);
			this->flowLayoutPanel3->Controls->Add(this->button15);
			this->flowLayoutPanel3->Location = System::Drawing::Point(923, 120);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(429, 590);
			this->flowLayoutPanel3->TabIndex = 3;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button13->Location = System::Drawing::Point(3, 3);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(414, 190);
			this->button13->TabIndex = 12;
			this->button13->Text = L"Solution";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button14->Location = System::Drawing::Point(3, 199);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(414, 190);
			this->button14->TabIndex = 13;
			this->button14->Text = L"Reset";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button15->Location = System::Drawing::Point(3, 395);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(414, 182);
			this->button15->TabIndex = 14;
			this->button15->Text = L"Exit";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1778, 944);
			this->Controls->Add(this->flowLayoutPanel3);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Puzzle Game";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int Counter=0;
		public: System::Void emptyspotfinder(Button^ but1, Button^ but2)
		{
			if (but2->Text == "")
			{
				but2->Text = but1->Text;
				but1->Text = "";
				Counter = Counter + 1;
				label2->Text = Counter.ToString();
			}
		}
		public: System::Void solutionChecker()
		{
			if (button1->Text == "1" && button2->Text == "2" && button3->Text == "3" && button4->Text == "4" &&
				button5->Text == "5" && button6->Text == "6" && button7->Text == "7" && button8->Text == "8" &&
				button9->Text == "9" && button10->Text == "10" && button11->Text == "11" && button12->Text == "12" &&
				button16->Text == "13" && button17->Text == "14" && button18->Text == "15")
			{
				MessageBox::Show("Well Done! You are a WINNER....", "Puzzel Game",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		public: System::Void Shuffel()
		{
			array<int>^ num = gcnew array<int>(16);
			int a=1, b, Checker;
			bool flag = false;
			do
			{
				Random^ RN = gcnew Random();
				Checker = Convert::ToInt32((RN->Next(0, 15)) + 1);
				for (b = 1; b <= a; b++)
				{
					if (num[b] == Checker)
					{
						flag = true;
						break;
					}
				}
				if (flag == true)
				{
					flag = false;
				}
				else
				{
					num[a] = Checker;
					a = a + 1;
				}
			} while (a <= 15);
			button1->Text = Convert::ToString(num[1]);
			button2->Text = Convert::ToString(num[2]);
			button3->Text = Convert::ToString(num[3]);
			button4->Text = Convert::ToString(num[4]);
			button5->Text = Convert::ToString(num[5]);
			button6->Text = Convert::ToString(num[6]);
			button7->Text = Convert::ToString(num[7]);
			button8->Text = Convert::ToString(num[8]);
			button9->Text = Convert::ToString(num[9]);
			button10->Text = Convert::ToString(num[10]);
			button11->Text = Convert::ToString(num[11]);
			button12->Text = Convert::ToString(num[12]);
			button16->Text = Convert::ToString(num[13]);
			button17->Text = Convert::ToString(num[14]);
			button18->Text = Convert::ToString(num[15]);
			button19->Text = "";
		}

	private: System::Void flowLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	emptyspotfinder(button1, button2);
	emptyspotfinder(button1, button5);
	solutionChecker();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	emptyspotfinder(button2, button1);
	emptyspotfinder(button2, button3);
	emptyspotfinder(button2, button6);
	solutionChecker();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	emptyspotfinder(button3, button2);
	emptyspotfinder(button3, button4);
	emptyspotfinder(button3, button7);
	solutionChecker();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	emptyspotfinder(button4, button3);
	emptyspotfinder(button4, button8);
	solutionChecker();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	emptyspotfinder(button5, button1);
	emptyspotfinder(button5, button6);
	emptyspotfinder(button5, button9);
	solutionChecker();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	emptyspotfinder(button6, button2);
	emptyspotfinder(button6, button5);
	emptyspotfinder(button6, button7);
	emptyspotfinder(button6, button10);
	solutionChecker();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	emptyspotfinder(button7, button3);
	emptyspotfinder(button7, button6);
	emptyspotfinder(button7, button8);
	emptyspotfinder(button7, button11);
	solutionChecker();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	emptyspotfinder(button8, button4);
	emptyspotfinder(button8, button7);
	emptyspotfinder(button8, button12);
	solutionChecker();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	emptyspotfinder(button9, button5);
	emptyspotfinder(button9, button10);
	emptyspotfinder(button9, button16);
	solutionChecker();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	emptyspotfinder(button10, button6);
	emptyspotfinder(button10, button9);
	emptyspotfinder(button10, button11);
	emptyspotfinder(button10, button17);
	solutionChecker();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	emptyspotfinder(button11, button7);
	emptyspotfinder(button11, button10);
	emptyspotfinder(button11, button12);
	emptyspotfinder(button11, button18);
	solutionChecker();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	emptyspotfinder(button12, button8);
	emptyspotfinder(button12, button11);
	emptyspotfinder(button12, button19);
	solutionChecker();
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	emptyspotfinder(button16, button9);
	emptyspotfinder(button16, button17);
	solutionChecker();
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	emptyspotfinder(button17, button10);
	emptyspotfinder(button17, button16);
	emptyspotfinder(button17, button18);
	solutionChecker();
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	emptyspotfinder(button18, button11);
	emptyspotfinder(button18, button17);
	emptyspotfinder(button18, button19);
	solutionChecker();
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	emptyspotfinder(button19, button12);
	emptyspotfinder(button19, button18);
	solutionChecker();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	Shuffel();
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	Shuffel();
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->Text = Convert::ToString(1);
	button2->Text = Convert::ToString(2);
	button3->Text = Convert::ToString(3);
	button4->Text = Convert::ToString(4);
	button5->Text = Convert::ToString(5);
	button6->Text = Convert::ToString(6);
	button7->Text = Convert::ToString(7);
	button8->Text = Convert::ToString(8);
	button9->Text = Convert::ToString(9);
	button10->Text = Convert::ToString(10);
	button11->Text = Convert::ToString(11);
	button12->Text = Convert::ToString(12);
	button16->Text = Convert::ToString(13);
	button17->Text = Convert::ToString(14);
	button18->Text = Convert::ToString(15);
	button19->Text = "";
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult iExit;
	iExit = MessageBox::Show("Conform if you want to EXIT", "Puzzel Game",
		MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (iExit == System::Windows::Forms::DialogResult::Yes)
	{
		Application::Exit();
	}
}
};
}
