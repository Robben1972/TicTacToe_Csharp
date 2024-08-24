#pragma once

namespace xoigra {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	static	int click = 0;
	static int min = 0;
	static int sek = 0;
	String^ sekund;
	private: System::Windows::Forms::Button^ button10;
	String^ minut;

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkGray;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 150, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::Window;
			this->button1->Location = System::Drawing::Point(457, 12);
			this->button1->MaximumSize = System::Drawing::Size(300, 300);
			this->button1->MinimumSize = System::Drawing::Size(300, 300);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(300, 300);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 150, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::Window;
			this->button2->Location = System::Drawing::Point(1115, 12);
			this->button2->MaximumSize = System::Drawing::Size(300, 300);
			this->button2->MinimumSize = System::Drawing::Size(300, 300);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(300, 300);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 150, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::Window;
			this->button3->Location = System::Drawing::Point(780, 12);
			this->button3->MaximumSize = System::Drawing::Size(300, 300);
			this->button3->MinimumSize = System::Drawing::Size(300, 300);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(300, 300);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 150, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::Window;
			this->button4->Location = System::Drawing::Point(780, 326);
			this->button4->MaximumSize = System::Drawing::Size(300, 300);
			this->button4->MinimumSize = System::Drawing::Size(300, 300);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(300, 300);
			this->button4->TabIndex = 5;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 150, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::Window;
			this->button5->Location = System::Drawing::Point(1115, 326);
			this->button5->MaximumSize = System::Drawing::Size(300, 300);
			this->button5->MinimumSize = System::Drawing::Size(300, 300);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(300, 300);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 150, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::Window;
			this->button6->Location = System::Drawing::Point(457, 326);
			this->button6->MaximumSize = System::Drawing::Size(300, 300);
			this->button6->MinimumSize = System::Drawing::Size(300, 300);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(300, 300);
			this->button6->TabIndex = 3;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 150, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::Window;
			this->button7->Location = System::Drawing::Point(780, 641);
			this->button7->MaximumSize = System::Drawing::Size(300, 300);
			this->button7->MinimumSize = System::Drawing::Size(300, 300);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(300, 300);
			this->button7->TabIndex = 8;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 150, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::Window;
			this->button8->Location = System::Drawing::Point(1115, 641);
			this->button8->MaximumSize = System::Drawing::Size(300, 300);
			this->button8->MinimumSize = System::Drawing::Size(300, 300);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(300, 300);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 150, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::SystemColors::Window;
			this->button9->Location = System::Drawing::Point(457, 641);
			this->button9->MaximumSize = System::Drawing::Size(300, 300);
			this->button9->MinimumSize = System::Drawing::Size(300, 300);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(300, 300);
			this->button9->TabIndex = 6;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(914, 944);
			this->label1->MinimumSize = System::Drawing::Size(40, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 22);
			this->label1->TabIndex = 9;
			this->label1->Text = L"0:0";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Red;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button10->Location = System::Drawing::Point(1703, 844);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(185, 97);
			this->button10->TabIndex = 10;
			this->button10->Text = L"Reset";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1900, 971);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->MinimumSize = System::Drawing::Size(1918, 1018);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (click % 2 == 0) {
			button1->Text = "X";
			click++;
			if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X") {
				MessageBox::Show("GAME OVER X WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}else if (button1->Text == "X" && button6->Text == "X" && button9->Text == "X") {
				MessageBox::Show("GAME OVER X WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button1->Text == "X" && button4->Text == "X" && button8->Text == "X") {
				MessageBox::Show("GAME OVER X WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
		}
		else {
			button1->Text = "O";
			click++;

			if (button1->Text == "O" && button2->Text == "O" && button3->Text == "O") {
				MessageBox::Show("GAME OVER O WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button1->Text == "O" && button6->Text == "O" && button9->Text == "O") {
				MessageBox::Show("GAME OVER O WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button1->Text == "O" && button4->Text == "O" && button8->Text == "O") {
				MessageBox::Show("GAME OVER O WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
		}
		button1->Enabled = false;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (click % 2 == 0) {
			button3->Text = "X";
			click++;
			if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X") {
				MessageBox::Show("GAME OVER X WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button3->Text == "X" && button4->Text == "X" && button7->Text == "X") {
				MessageBox::Show("GAME OVER X WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
		}
		else {
			button3->Text = "O";
			click++;
			if (button1->Text == "O" && button2->Text == "O" && button3->Text == "O") {
				MessageBox::Show("GAME OVER O WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button3->Text == "O" && button4->Text == "O" && button7->Text == "O") {
				MessageBox::Show("GAME OVER O WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
		}
		button3->Enabled = false;
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (click % 2 == 0) {
			button2->Text = "X";
			click++;
			if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X") {
				MessageBox::Show("GAME OVER X WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}else if (button2->Text == "X" && button5->Text == "X" && button8->Text == "X") {
				MessageBox::Show("GAME OVER X WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button2->Text == "X" && button4->Text == "X" && button9->Text == "X") {
				MessageBox::Show("GAME OVER X WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
		}
		else {
			button2->Text = "O";
			click++;
			if (button1->Text == "O" && button2->Text == "O" && button3->Text == "O") {
				MessageBox::Show("GAME OVER O WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button2->Text == "O" && button5->Text == "O" && button8->Text == "O") {
				MessageBox::Show("GAME OVER O WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button2->Text == "O" && button4->Text == "O" && button9->Text == "O") {
				MessageBox::Show("GAME OVER O WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
		}
		button2->Enabled = false;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (click % 2 == 0) {
			button6->Text = "X";
			click++;
			if (button6->Text == "X" && button5->Text == "X" && button4->Text == "X") {
				MessageBox::Show("GAME OVER X WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button1->Text == "X" && button6->Text == "X" && button9->Text == "X") {
				MessageBox::Show("GAME OVER X WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
		}
		else {
			button6->Text = "O";
			click++;
			if (button4->Text == "O" && button5->Text == "O" && button6->Text == "O") {
				MessageBox::Show("GAME OVER O WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button1->Text == "O" && button6->Text == "O" && button9->Text == "O") {
				MessageBox::Show("GAME OVER O WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
		}
		button6->Enabled = false;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (click % 2 == 0) {
			button4->Text = "X";
			click++;
			if (button6->Text == "X" && button5->Text == "X" && button4->Text == "X") {
				MessageBox::Show("GAME OVER X WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button3->Text == "X" && button4->Text == "X" && button7->Text == "X") {
				MessageBox::Show("GAME OVER X WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button1->Text == "X" && button4->Text == "X" && button8->Text == "X") {
				MessageBox::Show("GAME OVER X WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button2->Text == "X" && button4->Text == "X" && button9->Text == "X") {
				MessageBox::Show("GAME OVER X WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
		}
		else {
			button4->Text = "O";
			click++;
			if (button6->Text == "O" && button5->Text == "O" && button4->Text == "O") {
				MessageBox::Show("GAME OVER O WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button3->Text == "O" && button4->Text == "O" && button7->Text == "O") {
				MessageBox::Show("GAME OVER O WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button1->Text == "O" && button4->Text == "O" && button8->Text == "O") {
				MessageBox::Show("GAME OVER O WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button2->Text == "O" && button4->Text == "O" && button9->Text == "O") {
				MessageBox::Show("GAME OVER O WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
		}
		button4->Enabled = false;
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (click % 2 == 0) {
			button5->Text = "X";
			click++;
			if (button6->Text == "X" && button5->Text == "X" && button4->Text == "X") {
				MessageBox::Show("GAME OVER X WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button2->Text == "X" && button5->Text == "X" && button8->Text == "X") {
				MessageBox::Show("GAME OVER X WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
		}
		else {
			button5->Text = "O";
			click++;
			if (button6->Text == "O" && button5->Text == "O" && button4->Text == "O") {
				MessageBox::Show("GAME OVER O WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button2->Text == "O" && button5->Text == "O" && button8->Text == "O") {
				MessageBox::Show("GAME OVER O WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
		}
		button5->Enabled = false;
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (click % 2 == 0) {
			button9->Text = "X";
			click++;
			if (button7->Text == "X" && button8->Text == "X" && button9->Text == "X") {
				MessageBox::Show("GAME OVER X WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button1->Text == "X" && button6->Text == "X" && button9->Text == "X") {
				MessageBox::Show("GAME OVER X WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button2->Text == "X" && button4->Text == "X" && button9->Text == "X") {
				MessageBox::Show("GAME OVER X WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
		}
		else {
			button9->Text = "O";
			click++;
			if (button7->Text == "O" && button8->Text == "O" && button9->Text == "O") {
				MessageBox::Show("GAME OVER O WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button1->Text == "O" && button6->Text == "O" && button9->Text == "O") {
				MessageBox::Show("GAME OVER O WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button2->Text == "O" && button4->Text == "O" && button9->Text == "O") {
				MessageBox::Show("GAME OVER O WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
		}
		button9->Enabled = false;
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (click % 2 == 0) {
			button7->Text = "X";
			click++;
			if (button7->Text == "X" && button8->Text == "X" && button9->Text == "X") {
				MessageBox::Show("GAME OVER X WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button3->Text == "X" && button4->Text == "X" && button7->Text == "X") {
				MessageBox::Show("GAME OVER X WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
		}
		else {
			button7->Text = "O";
			click++;
			if (button7->Text == "O" && button8->Text == "O" && button9->Text == "O") {
				MessageBox::Show("GAME OVER O WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button3->Text == "O" && button4->Text == "O" && button7->Text == "O") {
				MessageBox::Show("GAME OVER O WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
		}
		button7->Enabled = false;
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (click % 2 == 0) {
			button8->Text = "X";
			click++;
			if (button7->Text == "X" && button8->Text == "X" && button9->Text == "X") {
				MessageBox::Show("GAME OVER X WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button2->Text == "X" && button5->Text == "X" && button8->Text == "X") {
				MessageBox::Show("GAME OVER X WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button1->Text == "X" && button4->Text == "X" && button8->Text == "X") {
				MessageBox::Show("GAME OVER X WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
		}
		else {
			button8->Text = "O";
			click++;
			if (button7->Text == "O" && button8->Text == "O" && button9->Text == "O") {
				MessageBox::Show("GAME OVER O WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button2->Text == "O" && button5->Text == "O" && button8->Text == "O") {
				MessageBox::Show("GAME OVER O WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
			else if (button1->Text == "O" && button4->Text == "O" && button8->Text == "O") {
				MessageBox::Show("GAME OVER O WIN", "Winner Window", MessageBoxButtons::OK, MessageBoxIcon::Information);
				reset();
			}
		}
		button8->Enabled = false;
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		sek++;
		sekund = System::Convert::ToString(sek);
		minut = System::Convert::ToString(min);
		label1->Text = minut + " : " + sekund;
		if (sek == 60) {
			sek = 0;
			min++;
		}
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		reset();
	}
	void reset() {
		   button1->Text = "";
		   button2->Text = "";
		   button3->Text = "";
		   button4->Text = "";
		   button5->Text = "";
		   button6->Text = "";
		   button7->Text = "";
		   button8->Text = "";
		   button9->Text = "";
		   button1->Enabled = true;
		   button2->Enabled = true;
		   button3->Enabled = true;
		   button4->Enabled = true;
		   button5->Enabled = true;
		   button6->Enabled = true;
		   button7->Enabled = true;
		   button8->Enabled = true;
		   button9->Enabled = true;
		   min = 0;
		   sek = 0;
		   click = 0; 
	}
};
}
