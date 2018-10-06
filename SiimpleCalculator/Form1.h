#pragma once

namespace SiimpleCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblDisplay;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	protected: 

	protected: 

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
			this->lblDisplay = (gcnew System::Windows::Forms::Label());
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
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblDisplay
			// 
			this->lblDisplay->BackColor = System::Drawing::Color::White;
			this->lblDisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblDisplay->Location = System::Drawing::Point(16, 23);
			this->lblDisplay->Name = L"lblDisplay";
			this->lblDisplay->Size = System::Drawing::Size(362, 78);
			this->lblDisplay->TabIndex = 0;
			this->lblDisplay->Text = L"0";
			this->lblDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(28, 127);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 67);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(117, 127);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(72, 67);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(207, 127);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(72, 67);
			this->button3->TabIndex = 1;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(297, 127);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(72, 67);
			this->button4->TabIndex = 1;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(26, 203);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(72, 67);
			this->button5->TabIndex = 1;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(117, 203);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(72, 67);
			this->button6->TabIndex = 1;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(207, 203);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(72, 67);
			this->button7->TabIndex = 1;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(297, 203);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(72, 67);
			this->button8->TabIndex = 1;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(28, 285);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(72, 67);
			this->button9->TabIndex = 1;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(119, 285);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(72, 67);
			this->button10->TabIndex = 1;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(209, 285);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(72, 67);
			this->button11->TabIndex = 1;
			this->button11->Text = L"c";
			this->button11->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(299, 285);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(72, 67);
			this->button12->TabIndex = 1;
			this->button12->Text = L"/";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(28, 371);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(72, 67);
			this->button13->TabIndex = 1;
			this->button13->Text = L"x";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(119, 371);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(72, 67);
			this->button14->TabIndex = 1;
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(209, 371);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(72, 67);
			this->button15->TabIndex = 1;
			this->button15->Text = L"+";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(299, 371);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(72, 67);
			this->button16->TabIndex = 1;
			this->button16->Text = L"=";
			this->button16->UseVisualStyleBackColor = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(28, 286);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(72, 67);
			this->button17->TabIndex = 1;
			this->button17->Text = L"9";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(119, 286);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(72, 67);
			this->button18->TabIndex = 1;
			this->button18->Text = L"0";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(209, 286);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(72, 67);
			this->button19->TabIndex = 1;
			this->button19->Text = L"c";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::Color::Black;
			this->button20->Location = System::Drawing::Point(299, 286);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(72, 67);
			this->button20->TabIndex = 1;
			this->button20->Text = L"/";
			this->button20->UseVisualStyleBackColor = false;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button21->ForeColor = System::Drawing::Color::Black;
			this->button21->Location = System::Drawing::Point(297, 127);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(72, 67);
			this->button21->TabIndex = 1;
			this->button21->Text = L"4";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button22->ForeColor = System::Drawing::Color::Black;
			this->button22->Location = System::Drawing::Point(297, 203);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(72, 67);
			this->button22->TabIndex = 1;
			this->button22->Text = L"8";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button23->ForeColor = System::Drawing::Color::Black;
			this->button23->Location = System::Drawing::Point(299, 285);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(72, 67);
			this->button23->TabIndex = 1;
			this->button23->Text = L"/";
			this->button23->UseVisualStyleBackColor = false;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button24->ForeColor = System::Drawing::Color::Black;
			this->button24->Location = System::Drawing::Point(299, 286);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(72, 67);
			this->button24->TabIndex = 1;
			this->button24->Text = L"/";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &Form1::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button25->ForeColor = System::Drawing::Color::Black;
			this->button25->Location = System::Drawing::Point(299, 371);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(72, 67);
			this->button25->TabIndex = 1;
			this->button25->Text = L"=";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &Form1::button25_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(394, 470);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblDisplay);
			this->Name = L"Form1";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}

		float firstnum;
		float secondnum;
		float result;
		char operation;

#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 if(lblDisplay -> Text == "0")
				 {
					 lblDisplay -> Text = "1";
				 }
				 else
				 {
					 lblDisplay -> Text = Convert::ToInt32(lblDisplay -> Text) + "1";
				 }
			 }

			
				
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				 if(lblDisplay -> Text == "0")
				 {
					 lblDisplay -> Text = "2";
				 }
				 else
				 {
					 lblDisplay -> Text = Convert::ToInt32(lblDisplay -> Text) + "2";
				 }
			    }
 private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

				 if(lblDisplay -> Text == "0")
				 {
					 lblDisplay -> Text = "3";
				 }
				 else
				 {
					 lblDisplay -> Text = Convert::ToInt32(lblDisplay -> Text) + "3";
				 }
			     }
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {

				 if(lblDisplay -> Text == "0")
				 {
					 lblDisplay -> Text = "4";
				 }
				 else
				 {
					 lblDisplay -> Text = Convert::ToInt32(lblDisplay -> Text) + "4";
				 }
			     }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

				 if(lblDisplay -> Text == "0")
				 {
					 lblDisplay -> Text = "5";
				 }
				 else
				 {
					 lblDisplay -> Text = Convert::ToInt32(lblDisplay -> Text) + "5";
				 }
			     }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {

				 if(lblDisplay -> Text == "0")
				 {
					 lblDisplay -> Text = "6";
				 }
				 else
				 {
					 lblDisplay -> Text = Convert::ToInt32(lblDisplay -> Text) + "6";
				 }
			     }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {

				 if(lblDisplay -> Text == "0")
				 {
					 lblDisplay -> Text = "7";
				 }
				 else
				 {
					 lblDisplay -> Text = Convert::ToInt32(lblDisplay -> Text) + "7";
				 }
			     }
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {

				 if(lblDisplay -> Text == "0")
				 {
					 lblDisplay -> Text = "8";
				 }
				 else
				 {
					 lblDisplay -> Text = Convert::ToInt32(lblDisplay -> Text) + "8";
				 }
			     }
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {

				 if(lblDisplay -> Text == "0")
				 {
					 lblDisplay -> Text = "9";
				 }
				 else
				 {
					 lblDisplay -> Text = Convert::ToInt32(lblDisplay -> Text) + "9";
				 }
			     }
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {

				 if(lblDisplay -> Text == "0")
				 {
					 lblDisplay -> Text = "0";
				 }
				 else
				 {
					 lblDisplay -> Text = Convert::ToInt32(lblDisplay -> Text) + "0";
				 }
			     }
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {


			 lblDisplay -> Text = "";
			 lblDisplay -> Text = "0";

		 }
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) 
		 {

			 firstnum = Convert::ToInt32(lblDisplay->Text);
			 lblDisplay->Text ="0";
			 operation = '/';

		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {

			 
			firstnum=Convert::ToInt32(lblDisplay->Text);
			lblDisplay->Text ="0";
			 operation='x';
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		     firstnum=Convert::ToInt32(lblDisplay->Text);
			 lblDisplay->Text="0";
			 operation='-';

			/* if(lblDisplay->Text->Contains("-"))
			 {
				 lblDisplay->Text=lblDisplay->Text->Remove(0,1);

			 }
			 else
			 {
				 lblDisplay->Text="-" + lblDisplay->Text;
			 }
			 */
		 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 firstnum=Convert::ToInt32(lblDisplay->Text);
			 lblDisplay->Text ="0";
			 operation='+';
		 }
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {

			 secondnum = Convert::ToInt32(lblDisplay->Text);

			 switch(operation)
			 {

			 case '+':
				 result = firstnum + secondnum;
				 lblDisplay->Text = System::Convert::ToString(result);
				 break;
				 
			 case '-':
				 result = firstnum - secondnum;
				 lblDisplay->Text =System::Convert::ToString(result);
				 break;
				 
			 case 'x':
				 result = firstnum * secondnum;
				 lblDisplay->Text =System::Convert::ToString(result);
				 break;
				 
			 case '/':
				 result = firstnum / secondnum;
				 lblDisplay->Text = System::Convert::ToString(result);
				 break;

			 }
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

