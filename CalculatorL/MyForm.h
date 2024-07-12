#pragma once
#include <cmath>
#include <control.h>
#include <string>
#include <msclr/marshal_cppstd.h>
#define PI 3.14159265 

namespace CalculatorL {

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
	private: System::Windows::Forms::Button^ butt_equal;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ butt_plus;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ butt_minus;

	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ butt_multipl;
	private: System::Windows::Forms::Button^ butt_AC;

	private: System::Windows::Forms::Button^ butt_percent;
	private: System::Windows::Forms::Button^ butt_backspace;
	private: System::Windows::Forms::Button^ butt_dividing;
	private: double first_num;
	private: char user_action = ' ';
	private: bool is_equal = false;




	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Button^ butt_min_plus;
	private: System::Windows::Forms::Button^ butt_degree;
	private: System::Windows::Forms::Button^ butt_sqrt;
	private: System::Windows::Forms::Button^ butt_cos;




	private: System::Windows::Forms::Button^ butt_sin;










	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->butt_equal = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->butt_plus = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->butt_minus = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->butt_multipl = (gcnew System::Windows::Forms::Button());
			this->butt_AC = (gcnew System::Windows::Forms::Button());
			this->butt_percent = (gcnew System::Windows::Forms::Button());
			this->butt_backspace = (gcnew System::Windows::Forms::Button());
			this->butt_dividing = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->butt_min_plus = (gcnew System::Windows::Forms::Button());
			this->butt_degree = (gcnew System::Windows::Forms::Button());
			this->butt_sqrt = (gcnew System::Windows::Forms::Button());
			this->butt_cos = (gcnew System::Windows::Forms::Button());
			this->butt_sin = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(61, 266);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"00";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Btn_nclick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(117, 266);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"0";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Btn_nclick);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(173, 266);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L",";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Btn_nclick);
			// 
			// butt_equal
			// 
			this->butt_equal->BackColor = System::Drawing::Color::DarkOrange;
			this->butt_equal->ForeColor = System::Drawing::Color::White;
			this->butt_equal->Location = System::Drawing::Point(229, 266);
			this->butt_equal->Name = L"butt_equal";
			this->butt_equal->Size = System::Drawing::Size(50, 23);
			this->butt_equal->TabIndex = 3;
			this->butt_equal->Text = L"=";
			this->butt_equal->UseVisualStyleBackColor = false;
			this->butt_equal->Click += gcnew System::EventHandler(this, &MyForm::butt_equal_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(61, 226);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 34);
			this->button5->TabIndex = 4;
			this->button5->Text = L"1";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Btn_nclick);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(117, 226);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 34);
			this->button6->TabIndex = 5;
			this->button6->Text = L"2";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Btn_nclick);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(173, 226);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 34);
			this->button7->TabIndex = 6;
			this->button7->Text = L"3";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Btn_nclick);
			// 
			// butt_plus
			// 
			this->butt_plus->BackColor = System::Drawing::Color::DarkOrange;
			this->butt_plus->ForeColor = System::Drawing::Color::Transparent;
			this->butt_plus->Location = System::Drawing::Point(229, 226);
			this->butt_plus->Name = L"butt_plus";
			this->butt_plus->Size = System::Drawing::Size(50, 34);
			this->butt_plus->TabIndex = 7;
			this->butt_plus->Text = L"+";
			this->butt_plus->UseVisualStyleBackColor = false;
			this->butt_plus->Click += gcnew System::EventHandler(this, &MyForm::butt_plus_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(61, 186);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 34);
			this->button9->TabIndex = 8;
			this->button9->Text = L"4";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Btn_nclick);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(117, 186);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(50, 34);
			this->button10->TabIndex = 9;
			this->button10->Text = L"5";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::Btn_nclick);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(173, 186);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(50, 34);
			this->button11->TabIndex = 10;
			this->button11->Text = L"6";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::Btn_nclick);
			// 
			// butt_minus
			// 
			this->butt_minus->BackColor = System::Drawing::Color::DarkOrange;
			this->butt_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butt_minus->ForeColor = System::Drawing::Color::White;
			this->butt_minus->Location = System::Drawing::Point(229, 186);
			this->butt_minus->Name = L"butt_minus";
			this->butt_minus->Size = System::Drawing::Size(50, 34);
			this->butt_minus->TabIndex = 11;
			this->butt_minus->Text = L"-";
			this->butt_minus->UseVisualStyleBackColor = false;
			this->butt_minus->Click += gcnew System::EventHandler(this, &MyForm::butt_minus_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(61, 144);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(50, 34);
			this->button13->TabIndex = 12;
			this->button13->Text = L"7";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::Btn_nclick);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(117, 146);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(50, 34);
			this->button14->TabIndex = 13;
			this->button14->Text = L"8";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::Btn_nclick);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(173, 146);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(50, 34);
			this->button15->TabIndex = 14;
			this->button15->Text = L"9";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::Btn_nclick);
			// 
			// butt_multipl
			// 
			this->butt_multipl->BackColor = System::Drawing::Color::DarkOrange;
			this->butt_multipl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butt_multipl->ForeColor = System::Drawing::Color::White;
			this->butt_multipl->Location = System::Drawing::Point(229, 144);
			this->butt_multipl->Name = L"butt_multipl";
			this->butt_multipl->Size = System::Drawing::Size(50, 34);
			this->butt_multipl->TabIndex = 15;
			this->butt_multipl->Text = L"*";
			this->butt_multipl->UseVisualStyleBackColor = false;
			this->butt_multipl->Click += gcnew System::EventHandler(this, &MyForm::butt_multipl_Click);
			// 
			// butt_AC
			// 
			this->butt_AC->BackColor = System::Drawing::Color::DarkOrange;
			this->butt_AC->Location = System::Drawing::Point(5, 106);
			this->butt_AC->Name = L"butt_AC";
			this->butt_AC->Size = System::Drawing::Size(50, 34);
			this->butt_AC->TabIndex = 16;
			this->butt_AC->Text = L"AC";
			this->butt_AC->UseVisualStyleBackColor = false;
			this->butt_AC->Click += gcnew System::EventHandler(this, &MyForm::butt_AC_Click);
			// 
			// butt_percent
			// 
			this->butt_percent->Location = System::Drawing::Point(173, 107);
			this->butt_percent->Name = L"butt_percent";
			this->butt_percent->Size = System::Drawing::Size(50, 34);
			this->butt_percent->TabIndex = 17;
			this->butt_percent->Text = L"%";
			this->butt_percent->UseVisualStyleBackColor = true;
			this->butt_percent->Click += gcnew System::EventHandler(this, &MyForm::butt_percent_Click);
			this->butt_percent->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::butt_percent_Paint);
			// 
			// butt_backspace
			// 
			this->butt_backspace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butt_backspace->Location = System::Drawing::Point(5, 184);
			this->butt_backspace->Name = L"butt_backspace";
			this->butt_backspace->Size = System::Drawing::Size(50, 34);
			this->butt_backspace->TabIndex = 18;
			this->butt_backspace->Text = L"backspace";
			this->butt_backspace->UseVisualStyleBackColor = true;
			this->butt_backspace->Click += gcnew System::EventHandler(this, &MyForm::butt_backspace_Click);
			// 
			// butt_dividing
			// 
			this->butt_dividing->BackColor = System::Drawing::Color::DarkOrange;
			this->butt_dividing->ForeColor = System::Drawing::Color::White;
			this->butt_dividing->Location = System::Drawing::Point(229, 107);
			this->butt_dividing->Name = L"butt_dividing";
			this->butt_dividing->Size = System::Drawing::Size(50, 34);
			this->butt_dividing->TabIndex = 19;
			this->butt_dividing->Text = L"/";
			this->butt_dividing->UseVisualStyleBackColor = false;
			this->butt_dividing->Click += gcnew System::EventHandler(this, &MyForm::butt_dividing_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 43);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(260, 39);
			this->label1->TabIndex = 21;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// butt_min_plus
			// 
			this->butt_min_plus->Location = System::Drawing::Point(61, 106);
			this->butt_min_plus->Name = L"butt_min_plus";
			this->butt_min_plus->Size = System::Drawing::Size(50, 34);
			this->butt_min_plus->TabIndex = 23;
			this->butt_min_plus->Text = L"+/-";
			this->butt_min_plus->UseVisualStyleBackColor = true;
			this->butt_min_plus->Click += gcnew System::EventHandler(this, &MyForm::butt_min_plus_Click);
			// 
			// butt_degree
			// 
			this->butt_degree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butt_degree->Location = System::Drawing::Point(117, 107);
			this->butt_degree->Name = L"butt_degree";
			this->butt_degree->Size = System::Drawing::Size(50, 34);
			this->butt_degree->TabIndex = 24;
			this->butt_degree->Text = L"**";
			this->butt_degree->UseVisualStyleBackColor = true;
			this->butt_degree->Click += gcnew System::EventHandler(this, &MyForm::butt_degree_Click);
			// 
			// butt_sqrt
			// 
			this->butt_sqrt->Location = System::Drawing::Point(5, 144);
			this->butt_sqrt->Name = L"butt_sqrt";
			this->butt_sqrt->Size = System::Drawing::Size(50, 34);
			this->butt_sqrt->TabIndex = 25;
			this->butt_sqrt->Text = L"sqrt";
			this->butt_sqrt->UseVisualStyleBackColor = true;
			this->butt_sqrt->Click += gcnew System::EventHandler(this, &MyForm::butt_sqrt_Click);
			// 
			// butt_cos
			// 
			this->butt_cos->Location = System::Drawing::Point(5, 266);
			this->butt_cos->Name = L"butt_cos";
			this->butt_cos->Size = System::Drawing::Size(50, 23);
			this->butt_cos->TabIndex = 26;
			this->butt_cos->Text = L"cos";
			this->butt_cos->UseVisualStyleBackColor = true;
			this->butt_cos->Click += gcnew System::EventHandler(this, &MyForm::butt_cos_Click);
			// 
			// butt_sin
			// 
			this->butt_sin->Location = System::Drawing::Point(5, 226);
			this->butt_sin->Name = L"butt_sin";
			this->butt_sin->Size = System::Drawing::Size(50, 34);
			this->butt_sin->TabIndex = 27;
			this->butt_sin->Text = L"sin";
			this->butt_sin->UseVisualStyleBackColor = true;
			this->butt_sin->Click += gcnew System::EventHandler(this, &MyForm::butt_sin_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(280, 295);
			this->Controls->Add(this->butt_sin);
			this->Controls->Add(this->butt_cos);
			this->Controls->Add(this->butt_sqrt);
			this->Controls->Add(this->butt_degree);
			this->Controls->Add(this->butt_min_plus);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->butt_dividing);
			this->Controls->Add(this->butt_backspace);
			this->Controls->Add(this->butt_percent);
			this->Controls->Add(this->butt_AC);
			this->Controls->Add(this->butt_multipl);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->butt_minus);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->butt_plus);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->butt_equal);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Calculator by me";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Btn_nclick(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);

		if (this->label1->Text)
		{
			System::String^ systemString = this->label1->Text;
			std::string stdString = msclr::interop::marshal_as<std::string>(systemString);
			if (stdString.find(',') != std::string::npos)
			{
				this->button3->Enabled = false;
			}
			else
			{
				this->button3->Enabled = true;
			}
		}
		if (this->label1->Text == "0" || is_equal == true)
		{
			this->label1->Text = button->Text;
			is_equal = false;
		}
		else
		{
			this->label1->Text = this->label1->Text + button->Text;
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void butt__Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');
	}
private: System::Void butt_dividing_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('/');
}
private: System::Void butt_plus_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('+');
}
private: System::Void butt_minus_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('-');
}
private: System::Void butt_multipl_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('*');
}
private: System::Void math_action(char action) {
	this->first_num = System::Convert::ToDouble(this->label1->Text);
	this->user_action = action;
	this->label1->Text = "0";
}

private: System::Void butt_equal_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user_action == ' ')
	{
		return;
	}
	double second = System::Convert::ToDouble(this->label1->Text);
	double res{};
	switch (this->user_action)
	{
	case '+':
		res = this->first_num + second;
		break;
	case '-':
		res = this->first_num - second;
		break;
	case '*':
		res = this->first_num * second;
		break;
	case '/':
		if (second == 0)
		{
			this->label1->ForeColor = Color::DarkRed;
			res = 0;
			MessageBox::Show(this, "ƒействие запрещено", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		res = this->first_num / second;
		break;
	default:
		break;
	}
	this->label1->Text = System::Convert::ToString(res);
}

private: System::Void butt_AC_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label1->Text = "0";
	this->label1->ForeColor = Color::Black;
	this->first_num = 0;
	this->user_action = ' ';
	is_equal = false;

}
private: System::Void butt_min_plus_Click(System::Object^ sender, System::EventArgs^ e) {
	double num = System::Convert::ToDouble(this->label1->Text);
	num *= -1;
	this->label1->Text = System::Convert::ToString(num);
}
private: System::Void butt_percent_Click(System::Object^ sender, System::EventArgs^ e) {
	double numP;
	numP = System::Convert::ToDouble(this->label1->Text);
	numP /= 100;
	this->label1->Text = System::Convert::ToString(numP);
	this->button3->Enabled = false;
}
private: System::Void butt_degree_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label1->Text = System::Convert::ToString(pow(System::Convert::ToDouble(this->label1->Text), 2));
}
private: System::Void butt_sqrt_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label1->Text = System::Convert::ToString(pow(System::Convert::ToDouble(this->label1->Text), 0.5));
}
private: System::Void butt_sin_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label1->Text = System::Convert::ToString(sin(System::Convert::ToDouble(this->label1->Text) * PI / 180));
}
private: System::Void butt_cos_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label1->Text = System::Convert::ToString(cos(System::Convert::ToDouble(this->label1->Text) * PI / 180));
}
private: System::Void butt_backspace_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->label1->Text->Length != 0)
	{
		label1 ->Text = label1->Text->Remove(label1->Text->Length - 1);
	}
}

};
}