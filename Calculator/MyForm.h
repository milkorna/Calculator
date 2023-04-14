#pragma once
#include<string>
#include<vector>

namespace Calculator {

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

	protected:



	private: System::Windows::Forms::Button^ button_plus;
	private: System::Windows::Forms::Button^ button_minus;
	private: System::Windows::Forms::Button^ button_mult;
	private: System::Windows::Forms::Button^ button_9;
	private: System::Windows::Forms::Button^ button_8;
	private: System::Windows::Forms::Button^ button_clear;






	private: System::Windows::Forms::Button^ button_div;

	private: System::Windows::Forms::Button^ button_invert;
	private: System::Windows::Forms::Button^ button_7;




	private: System::Windows::Forms::Button^ button_6;
	private: System::Windows::Forms::Button^ button_5;
	private: System::Windows::Forms::Button^ button_4;



	private: System::Windows::Forms::Button^ button_3;

	private: System::Windows::Forms::Button^ button_2;

	private: System::Windows::Forms::Button^ button_1;

	private: System::Windows::Forms::Button^ button_eq;
	private: System::Windows::Forms::Button^ button_comma;
	private: System::Windows::Forms::Button^ button_0;
	private: System::Windows::Forms::TextBox^ textEx;
	private: System::Windows::Forms::TextBox^ textRes;

	private: System::Windows::Forms::Button^ button_fb;
	private: System::Windows::Forms::Button^ button_sb;
	private: System::Windows::Forms::Button^ button_e;
	private: System::Windows::Forms::Button^ button_pi;












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
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button_mult = (gcnew System::Windows::Forms::Button());
			this->button_9 = (gcnew System::Windows::Forms::Button());
			this->button_8 = (gcnew System::Windows::Forms::Button());
			this->button_clear = (gcnew System::Windows::Forms::Button());
			this->button_div = (gcnew System::Windows::Forms::Button());
			this->button_invert = (gcnew System::Windows::Forms::Button());
			this->button_7 = (gcnew System::Windows::Forms::Button());
			this->button_6 = (gcnew System::Windows::Forms::Button());
			this->button_5 = (gcnew System::Windows::Forms::Button());
			this->button_4 = (gcnew System::Windows::Forms::Button());
			this->button_3 = (gcnew System::Windows::Forms::Button());
			this->button_2 = (gcnew System::Windows::Forms::Button());
			this->button_1 = (gcnew System::Windows::Forms::Button());
			this->button_eq = (gcnew System::Windows::Forms::Button());
			this->button_comma = (gcnew System::Windows::Forms::Button());
			this->button_0 = (gcnew System::Windows::Forms::Button());
			this->textEx = (gcnew System::Windows::Forms::TextBox());
			this->textRes = (gcnew System::Windows::Forms::TextBox());
			this->button_fb = (gcnew System::Windows::Forms::Button());
			this->button_sb = (gcnew System::Windows::Forms::Button());
			this->button_e = (gcnew System::Windows::Forms::Button());
			this->button_pi = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_plus
			// 
			this->button_plus->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_plus->FlatAppearance->BorderColor = System::Drawing::Color::SteelBlue;
			this->button_plus->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AliceBlue;
			this->button_plus->FlatAppearance->MouseOverBackColor = System::Drawing::Color::AliceBlue;
			this->button_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plus->ForeColor = System::Drawing::Color::SteelBlue;
			this->button_plus->Location = System::Drawing::Point(476, 535);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(100, 100);
			this->button_plus->TabIndex = 2;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = false;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::button_plus_Click);
			// 
			// button_minus
			// 
			this->button_minus->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_minus->FlatAppearance->BorderColor = System::Drawing::Color::SteelBlue;
			this->button_minus->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AliceBlue;
			this->button_minus->FlatAppearance->MouseOverBackColor = System::Drawing::Color::AliceBlue;
			this->button_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_minus->ForeColor = System::Drawing::Color::SteelBlue;
			this->button_minus->Location = System::Drawing::Point(476, 420);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(100, 100);
			this->button_minus->TabIndex = 3;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = false;
			this->button_minus->Click += gcnew System::EventHandler(this, &MyForm::button_minus_Click);
			// 
			// button_mult
			// 
			this->button_mult->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_mult->FlatAppearance->BorderColor = System::Drawing::Color::SteelBlue;
			this->button_mult->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AliceBlue;
			this->button_mult->FlatAppearance->MouseOverBackColor = System::Drawing::Color::AliceBlue;
			this->button_mult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_mult->ForeColor = System::Drawing::Color::SteelBlue;
			this->button_mult->Location = System::Drawing::Point(476, 305);
			this->button_mult->Name = L"button_mult";
			this->button_mult->Size = System::Drawing::Size(100, 100);
			this->button_mult->TabIndex = 4;
			this->button_mult->Text = L"x";
			this->button_mult->UseVisualStyleBackColor = false;
			this->button_mult->Click += gcnew System::EventHandler(this, &MyForm::button_mult_Click);
			// 
			// button_9
			// 
			this->button_9->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_9->FlatAppearance->BorderColor = System::Drawing::Color::SteelBlue;
			this->button_9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AliceBlue;
			this->button_9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::AliceBlue;
			this->button_9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_9->ForeColor = System::Drawing::Color::SteelBlue;
			this->button_9->Location = System::Drawing::Point(361, 305);
			this->button_9->Name = L"button_9";
			this->button_9->Size = System::Drawing::Size(100, 100);
			this->button_9->TabIndex = 5;
			this->button_9->Text = L"9";
			this->button_9->UseVisualStyleBackColor = false;
			this->button_9->Click += gcnew System::EventHandler(this, &MyForm::button_9_Click);
			// 
			// button_8
			// 
			this->button_8->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_8->FlatAppearance->BorderColor = System::Drawing::Color::SteelBlue;
			this->button_8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AliceBlue;
			this->button_8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::AliceBlue;
			this->button_8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_8->ForeColor = System::Drawing::Color::SteelBlue;
			this->button_8->Location = System::Drawing::Point(246, 305);
			this->button_8->Name = L"button_8";
			this->button_8->Size = System::Drawing::Size(100, 100);
			this->button_8->TabIndex = 6;
			this->button_8->Text = L"8";
			this->button_8->UseVisualStyleBackColor = false;
			this->button_8->Click += gcnew System::EventHandler(this, &MyForm::button_8_Click);
			// 
			// button_clear
			// 
			this->button_clear->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_clear->FlatAppearance->BorderColor = System::Drawing::Color::SteelBlue;
			this->button_clear->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AliceBlue;
			this->button_clear->FlatAppearance->MouseOverBackColor = System::Drawing::Color::AliceBlue;
			this->button_clear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_clear->ForeColor = System::Drawing::Color::SteelBlue;
			this->button_clear->Location = System::Drawing::Point(14, 189);
			this->button_clear->Name = L"button_clear";
			this->button_clear->Size = System::Drawing::Size(215, 100);
			this->button_clear->TabIndex = 7;
			this->button_clear->Text = L"clear";
			this->button_clear->UseVisualStyleBackColor = false;
			this->button_clear->Click += gcnew System::EventHandler(this, &MyForm::button_clear_Click);
			// 
			// button_div
			// 
			this->button_div->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_div->FlatAppearance->BorderColor = System::Drawing::Color::SteelBlue;
			this->button_div->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AliceBlue;
			this->button_div->FlatAppearance->MouseOverBackColor = System::Drawing::Color::AliceBlue;
			this->button_div->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_div->ForeColor = System::Drawing::Color::SteelBlue;
			this->button_div->Location = System::Drawing::Point(476, 189);
			this->button_div->Name = L"button_div";
			this->button_div->Size = System::Drawing::Size(100, 100);
			this->button_div->TabIndex = 8;
			this->button_div->Text = L":";
			this->button_div->UseVisualStyleBackColor = false;
			this->button_div->Click += gcnew System::EventHandler(this, &MyForm::button_div_Click);
			// 
			// button_invert
			// 
			this->button_invert->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_invert->FlatAppearance->BorderColor = System::Drawing::Color::SteelBlue;
			this->button_invert->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AliceBlue;
			this->button_invert->FlatAppearance->MouseOverBackColor = System::Drawing::Color::AliceBlue;
			this->button_invert->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_invert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_invert->ForeColor = System::Drawing::Color::SteelBlue;
			this->button_invert->Location = System::Drawing::Point(246, 189);
			this->button_invert->Name = L"button_invert";
			this->button_invert->Size = System::Drawing::Size(217, 100);
			this->button_invert->TabIndex = 10;
			this->button_invert->Text = L"+/-";
			this->button_invert->UseVisualStyleBackColor = false;
			this->button_invert->Click += gcnew System::EventHandler(this, &MyForm::button_invert_Click);
			// 
			// button_7
			// 
			this->button_7->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_7->FlatAppearance->BorderColor = System::Drawing::Color::SteelBlue;
			this->button_7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AliceBlue;
			this->button_7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::AliceBlue;
			this->button_7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_7->ForeColor = System::Drawing::Color::SteelBlue;
			this->button_7->Location = System::Drawing::Point(129, 305);
			this->button_7->Name = L"button_7";
			this->button_7->Size = System::Drawing::Size(100, 100);
			this->button_7->TabIndex = 11;
			this->button_7->Text = L"7";
			this->button_7->UseVisualStyleBackColor = false;
			this->button_7->Click += gcnew System::EventHandler(this, &MyForm::button_7_Click);
			// 
			// button_6
			// 
			this->button_6->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_6->FlatAppearance->BorderColor = System::Drawing::Color::SteelBlue;
			this->button_6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AliceBlue;
			this->button_6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::AliceBlue;
			this->button_6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_6->ForeColor = System::Drawing::Color::SteelBlue;
			this->button_6->Location = System::Drawing::Point(361, 420);
			this->button_6->Name = L"button_6";
			this->button_6->Size = System::Drawing::Size(100, 100);
			this->button_6->TabIndex = 12;
			this->button_6->Text = L"6";
			this->button_6->UseVisualStyleBackColor = false;
			this->button_6->Click += gcnew System::EventHandler(this, &MyForm::button_6_Click);
			// 
			// button_5
			// 
			this->button_5->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_5->FlatAppearance->BorderColor = System::Drawing::Color::SteelBlue;
			this->button_5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AliceBlue;
			this->button_5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::AliceBlue;
			this->button_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_5->ForeColor = System::Drawing::Color::SteelBlue;
			this->button_5->Location = System::Drawing::Point(246, 420);
			this->button_5->Name = L"button_5";
			this->button_5->Size = System::Drawing::Size(100, 100);
			this->button_5->TabIndex = 13;
			this->button_5->Text = L"5";
			this->button_5->UseVisualStyleBackColor = false;
			this->button_5->Click += gcnew System::EventHandler(this, &MyForm::button_5_Click);
			// 
			// button_4
			// 
			this->button_4->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_4->FlatAppearance->BorderColor = System::Drawing::Color::SteelBlue;
			this->button_4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AliceBlue;
			this->button_4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::AliceBlue;
			this->button_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_4->ForeColor = System::Drawing::Color::SteelBlue;
			this->button_4->Location = System::Drawing::Point(129, 420);
			this->button_4->Name = L"button_4";
			this->button_4->Size = System::Drawing::Size(100, 100);
			this->button_4->TabIndex = 14;
			this->button_4->Text = L"4";
			this->button_4->UseVisualStyleBackColor = false;
			this->button_4->Click += gcnew System::EventHandler(this, &MyForm::button_4_Click);
			// 
			// button_3
			// 
			this->button_3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_3->FlatAppearance->BorderColor = System::Drawing::Color::SteelBlue;
			this->button_3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AliceBlue;
			this->button_3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::AliceBlue;
			this->button_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_3->ForeColor = System::Drawing::Color::SteelBlue;
			this->button_3->Location = System::Drawing::Point(361, 535);
			this->button_3->Name = L"button_3";
			this->button_3->Size = System::Drawing::Size(100, 100);
			this->button_3->TabIndex = 15;
			this->button_3->Text = L"3";
			this->button_3->UseVisualStyleBackColor = false;
			this->button_3->Click += gcnew System::EventHandler(this, &MyForm::button_3_Click);
			// 
			// button_2
			// 
			this->button_2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_2->FlatAppearance->BorderColor = System::Drawing::Color::SteelBlue;
			this->button_2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AliceBlue;
			this->button_2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::AliceBlue;
			this->button_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_2->ForeColor = System::Drawing::Color::SteelBlue;
			this->button_2->Location = System::Drawing::Point(246, 535);
			this->button_2->Name = L"button_2";
			this->button_2->Size = System::Drawing::Size(100, 100);
			this->button_2->TabIndex = 16;
			this->button_2->Text = L"2";
			this->button_2->UseVisualStyleBackColor = false;
			this->button_2->Click += gcnew System::EventHandler(this, &MyForm::button_2_Click);
			// 
			// button_1
			// 
			this->button_1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_1->FlatAppearance->BorderColor = System::Drawing::Color::SteelBlue;
			this->button_1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AliceBlue;
			this->button_1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::AliceBlue;
			this->button_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_1->ForeColor = System::Drawing::Color::SteelBlue;
			this->button_1->Location = System::Drawing::Point(129, 535);
			this->button_1->Name = L"button_1";
			this->button_1->Size = System::Drawing::Size(100, 100);
			this->button_1->TabIndex = 17;
			this->button_1->Text = L"1";
			this->button_1->UseVisualStyleBackColor = false;
			this->button_1->Click += gcnew System::EventHandler(this, &MyForm::button_1_Click);
			// 
			// button_eq
			// 
			this->button_eq->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_eq->FlatAppearance->BorderColor = System::Drawing::Color::SteelBlue;
			this->button_eq->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AliceBlue;
			this->button_eq->FlatAppearance->MouseOverBackColor = System::Drawing::Color::AliceBlue;
			this->button_eq->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_eq->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_eq->ForeColor = System::Drawing::Color::SteelBlue;
			this->button_eq->Location = System::Drawing::Point(361, 650);
			this->button_eq->Name = L"button_eq";
			this->button_eq->Size = System::Drawing::Size(215, 100);
			this->button_eq->TabIndex = 18;
			this->button_eq->Text = L"=";
			this->button_eq->UseVisualStyleBackColor = false;
			this->button_eq->Click += gcnew System::EventHandler(this, &MyForm::button_eq_Click);
			// 
			// button_comma
			// 
			this->button_comma->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_comma->FlatAppearance->BorderColor = System::Drawing::Color::SteelBlue;
			this->button_comma->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AliceBlue;
			this->button_comma->FlatAppearance->MouseOverBackColor = System::Drawing::Color::AliceBlue;
			this->button_comma->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_comma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_comma->ForeColor = System::Drawing::Color::SteelBlue;
			this->button_comma->Location = System::Drawing::Point(246, 650);
			this->button_comma->Name = L"button_comma";
			this->button_comma->Size = System::Drawing::Size(100, 100);
			this->button_comma->TabIndex = 19;
			this->button_comma->Text = L",";
			this->button_comma->UseVisualStyleBackColor = false;
			this->button_comma->Click += gcnew System::EventHandler(this, &MyForm::button_comma_Click);
			// 
			// button_0
			// 
			this->button_0->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_0->FlatAppearance->BorderColor = System::Drawing::Color::SteelBlue;
			this->button_0->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AliceBlue;
			this->button_0->FlatAppearance->MouseOverBackColor = System::Drawing::Color::AliceBlue;
			this->button_0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_0->ForeColor = System::Drawing::Color::SteelBlue;
			this->button_0->Location = System::Drawing::Point(129, 650);
			this->button_0->Name = L"button_0";
			this->button_0->Size = System::Drawing::Size(100, 100);
			this->button_0->TabIndex = 20;
			this->button_0->Text = L"0";
			this->button_0->UseVisualStyleBackColor = false;
			this->button_0->Click += gcnew System::EventHandler(this, &MyForm::button_0_Click);
			// 
			// textEx
			// 
			this->textEx->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textEx->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textEx->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textEx->ForeColor = System::Drawing::Color::SteelBlue;
			this->textEx->Location = System::Drawing::Point(12, 12);
			this->textEx->MaximumSize = System::Drawing::Size(565, 80);
			this->textEx->MinimumSize = System::Drawing::Size(565, 80);
			this->textEx->Multiline = true;
			this->textEx->Name = L"textEx";
			this->textEx->Size = System::Drawing::Size(565, 80);
			this->textEx->TabIndex = 21;
			this->textEx->Text = L"0";
			this->textEx->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textRes
			// 
			this->textRes->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textRes->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textRes->ForeColor = System::Drawing::Color::SteelBlue;
			this->textRes->Location = System::Drawing::Point(11, 98);
			this->textRes->MaximumSize = System::Drawing::Size(565, 80);
			this->textRes->MinimumSize = System::Drawing::Size(565, 80);
			this->textRes->Multiline = true;
			this->textRes->Name = L"textRes";
			this->textRes->Size = System::Drawing::Size(565, 80);
			this->textRes->TabIndex = 22;
			this->textRes->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button_fb
			// 
			this->button_fb->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_fb->FlatAppearance->BorderColor = System::Drawing::Color::SteelBlue;
			this->button_fb->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AliceBlue;
			this->button_fb->FlatAppearance->MouseOverBackColor = System::Drawing::Color::AliceBlue;
			this->button_fb->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_fb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_fb->ForeColor = System::Drawing::Color::SteelBlue;
			this->button_fb->Location = System::Drawing::Point(14, 305);
			this->button_fb->Name = L"button_fb";
			this->button_fb->Size = System::Drawing::Size(100, 100);
			this->button_fb->TabIndex = 23;
			this->button_fb->Text = L"(";
			this->button_fb->UseVisualStyleBackColor = false;
			this->button_fb->Click += gcnew System::EventHandler(this, &MyForm::button_fb_Click);
			// 
			// button_sb
			// 
			this->button_sb->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_sb->FlatAppearance->BorderColor = System::Drawing::Color::SteelBlue;
			this->button_sb->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AliceBlue;
			this->button_sb->FlatAppearance->MouseOverBackColor = System::Drawing::Color::AliceBlue;
			this->button_sb->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_sb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_sb->ForeColor = System::Drawing::Color::SteelBlue;
			this->button_sb->Location = System::Drawing::Point(12, 420);
			this->button_sb->Name = L"button_sb";
			this->button_sb->Size = System::Drawing::Size(100, 100);
			this->button_sb->TabIndex = 24;
			this->button_sb->Text = L")";
			this->button_sb->UseVisualStyleBackColor = false;
			this->button_sb->Click += gcnew System::EventHandler(this, &MyForm::button_sb_Click);
			// 
			// button_e
			// 
			this->button_e->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_e->FlatAppearance->BorderColor = System::Drawing::Color::SteelBlue;
			this->button_e->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AliceBlue;
			this->button_e->FlatAppearance->MouseOverBackColor = System::Drawing::Color::AliceBlue;
			this->button_e->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_e->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_e->ForeColor = System::Drawing::Color::SteelBlue;
			this->button_e->Location = System::Drawing::Point(11, 535);
			this->button_e->Name = L"button_e";
			this->button_e->Size = System::Drawing::Size(100, 100);
			this->button_e->TabIndex = 25;
			this->button_e->Text = L"e";
			this->button_e->UseVisualStyleBackColor = false;
			this->button_e->Click += gcnew System::EventHandler(this, &MyForm::button_e_Click);
			// 
			// button_pi
			// 
			this->button_pi->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_pi->FlatAppearance->BorderColor = System::Drawing::Color::SteelBlue;
			this->button_pi->FlatAppearance->MouseDownBackColor = System::Drawing::Color::AliceBlue;
			this->button_pi->FlatAppearance->MouseOverBackColor = System::Drawing::Color::AliceBlue;
			this->button_pi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_pi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_pi->ForeColor = System::Drawing::Color::SteelBlue;
			this->button_pi->Location = System::Drawing::Point(11, 650);
			this->button_pi->Name = L"button_pi";
			this->button_pi->Size = System::Drawing::Size(100, 100);
			this->button_pi->TabIndex = 26;
			this->button_pi->Text = L"pi";
			this->button_pi->UseVisualStyleBackColor = false;
			this->button_pi->Click += gcnew System::EventHandler(this, &MyForm::button_pi_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(570, 712);
			this->Controls->Add(this->button_pi);
			this->Controls->Add(this->button_e);
			this->Controls->Add(this->button_sb);
			this->Controls->Add(this->button_fb);
			this->Controls->Add(this->textEx);
			this->Controls->Add(this->textRes);
			this->Controls->Add(this->button_0);
			this->Controls->Add(this->button_comma);
			this->Controls->Add(this->button_eq);
			this->Controls->Add(this->button_1);
			this->Controls->Add(this->button_2);
			this->Controls->Add(this->button_3);
			this->Controls->Add(this->button_4);
			this->Controls->Add(this->button_5);
			this->Controls->Add(this->button_6);
			this->Controls->Add(this->button_7);
			this->Controls->Add(this->button_invert);
			this->Controls->Add(this->button_div);
			this->Controls->Add(this->button_clear);
			this->Controls->Add(this->button_8);
			this->Controls->Add(this->button_9);
			this->Controls->Add(this->button_mult);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button_plus);
			this->MaximumSize = System::Drawing::Size(602, 800);
			this->MinimumSize = System::Drawing::Size(602, 800);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: short int firstBracketCount = 0;
	private: short int secondBracketCount = 0;
	private: double eNum = 2.7182818;
	private: double piNum = 3.1415926;
	private: bool inverse;
	private: bool expInBrackets;
	private: bool IsOperOrFB();
	private: double GetNum(System::String^ exp);
	private: void DoMultOrDiv(const char oper, System::String^ strNum, double& exp);
	private: void AddToResult(double &result, double firstNum, int ind, std::vector<wchar_t> oper);
	private: bool SameNumHaveComma();
	private: bool HaveOperBetweenBrackets();
	private: double SolveExp(System::String^ strExp);
	private: System::Void button_0_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_6_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_7_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_8_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_9_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_clear_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_invert_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_div_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_mult_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_minus_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_eq_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_fb_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_sb_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_e_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_pi_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_comma_Click(System::Object^ sender, System::EventArgs^ e);
};
}
