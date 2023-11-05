#pragma once
#include <cmath> 

namespace CppCLRWinFormsProject {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ gmi;

	private: System::Windows::Forms::TextBox^ ccPayment;

	private: System::Windows::Forms::TextBox^ carPayment;
	private: System::Windows::Forms::TextBox^ downPayment;
	private: System::Windows::Forms::TextBox^ loanAmount;








	private: System::Windows::Forms::TextBox^ slPayment;
	private: System::Windows::Forms::TextBox^ appraisedValue;

	private: System::Windows::Forms::TextBox^ monthlyMPayment;
	private: System::Windows::Forms::TextBox^ creditScore;






	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ finalOutput;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->gmi = (gcnew System::Windows::Forms::TextBox());
			this->ccPayment = (gcnew System::Windows::Forms::TextBox());
			this->carPayment = (gcnew System::Windows::Forms::TextBox());
			this->downPayment = (gcnew System::Windows::Forms::TextBox());
			this->loanAmount = (gcnew System::Windows::Forms::TextBox());
			this->slPayment = (gcnew System::Windows::Forms::TextBox());
			this->appraisedValue = (gcnew System::Windows::Forms::TextBox());
			this->monthlyMPayment = (gcnew System::Windows::Forms::TextBox());
			this->creditScore = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->finalOutput = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F));
			this->label1->Location = System::Drawing::Point(87, 202);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Gross Monthly Income :";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F));
			this->label2->Location = System::Drawing::Point(89, 244);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(214, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Credit Card Payment   :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(86, 294);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(217, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Car Payment               :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(84, 338);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(219, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Student Loan Payment :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(84, 378);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(216, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Appraised Value          :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(573, 202);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(254, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Down Payment                  :";
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(576, 243);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(251, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Loan Amount                    :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Verdana", 9.8F));
			this->label8->Location = System::Drawing::Point(573, 294);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(264, 20);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Monthly Mortgage Payment : \r\n";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(576, 341);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(261, 20);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Credit Score                     :  ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(86, 145);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(187, 30);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Enter the following : ";
			this->label10->Click += gcnew System::EventHandler(this, &Form1::label10_Click);
			// 
			// gmi
			// 
			this->gmi->Location = System::Drawing::Point(320, 204);
			this->gmi->Name = L"gmi";
			this->gmi->Size = System::Drawing::Size(190, 22);
			this->gmi->TabIndex = 10;
			this->gmi->TextChanged += gcnew System::EventHandler(this, &Form1::gmi_TextChanged);
			// 
			// ccPayment
			// 
			this->ccPayment->Location = System::Drawing::Point(320, 245);
			this->ccPayment->Name = L"ccPayment";
			this->ccPayment->Size = System::Drawing::Size(190, 22);
			this->ccPayment->TabIndex = 11;
			// 
			// carPayment
			// 
			this->carPayment->Location = System::Drawing::Point(320, 295);
			this->carPayment->Name = L"carPayment";
			this->carPayment->Size = System::Drawing::Size(190, 22);
			this->carPayment->TabIndex = 12;
			// 
			// downPayment
			// 
			this->downPayment->Location = System::Drawing::Point(843, 202);
			this->downPayment->Name = L"downPayment";
			this->downPayment->Size = System::Drawing::Size(190, 22);
			this->downPayment->TabIndex = 13;
			// 
			// loanAmount
			// 
			this->loanAmount->Location = System::Drawing::Point(843, 243);
			this->loanAmount->Name = L"loanAmount";
			this->loanAmount->Size = System::Drawing::Size(190, 22);
			this->loanAmount->TabIndex = 14;
			// 
			// slPayment
			// 
			this->slPayment->Location = System::Drawing::Point(320, 339);
			this->slPayment->Name = L"slPayment";
			this->slPayment->Size = System::Drawing::Size(190, 22);
			this->slPayment->TabIndex = 15;
			// 
			// appraisedValue
			// 
			this->appraisedValue->Location = System::Drawing::Point(320, 379);
			this->appraisedValue->Name = L"appraisedValue";
			this->appraisedValue->Size = System::Drawing::Size(190, 22);
			this->appraisedValue->TabIndex = 16;
			// 
			// monthlyMPayment
			// 
			this->monthlyMPayment->Location = System::Drawing::Point(843, 292);
			this->monthlyMPayment->Name = L"monthlyMPayment";
			this->monthlyMPayment->Size = System::Drawing::Size(190, 22);
			this->monthlyMPayment->TabIndex = 17;
			// 
			// creditScore
			// 
			this->creditScore->Location = System::Drawing::Point(843, 342);
			this->creditScore->Name = L"creditScore";
			this->creditScore->Size = System::Drawing::Size(190, 22);
			this->creditScore->TabIndex = 18;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label11->Location = System::Drawing::Point(314, 72);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(468, 35);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Homebuyer Readiness Evaluation";
			this->label11->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Georgia", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label12->Location = System::Drawing::Point(975, 534);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(98, 20);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Fannie Mae";
			this->label12->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(430, 418);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(233, 54);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Enter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Rockwell Condensed", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Firebrick;
			this->label13->Location = System::Drawing::Point(377, 491);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(151, 30);
			this->label13->TabIndex = 22;
			this->label13->Text = L"Are you eligible\?";
			this->label13->Click += gcnew System::EventHandler(this, &Form1::label13_Click);
			// 
			// finalOutput
			// 
			this->finalOutput->AutoSize = true;
			this->finalOutput->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->finalOutput->Location = System::Drawing::Point(534, 498);
			this->finalOutput->Name = L"finalOutput";
			this->finalOutput->Size = System::Drawing::Size(174, 20);
			this->finalOutput->TabIndex = 23;
			this->finalOutput->Text = L"_______________";
			this->finalOutput->Click += gcnew System::EventHandler(this, &Form1::label14_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::GhostWhite;
			this->ClientSize = System::Drawing::Size(1099, 563);
			this->Controls->Add(this->finalOutput);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->creditScore);
			this->Controls->Add(this->monthlyMPayment);
			this->Controls->Add(this->appraisedValue);
			this->Controls->Add(this->slPayment);
			this->Controls->Add(this->loanAmount);
			this->Controls->Add(this->downPayment);
			this->Controls->Add(this->carPayment);
			this->Controls->Add(this->ccPayment);
			this->Controls->Add(this->gmi);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gmi_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ x = gmi->Text;  
	double y = System::Convert::ToDouble(x);   
	String^ x2 = ccPayment->Text;  
	double y2 = System::Convert::ToDouble(x2);  
	String^ x3 = carPayment->Text;  
	double y3 = System::Convert::ToDouble(x3); 
	String^ x4 = slPayment->Text;  
	double y4 = System::Convert::ToDouble(x4); 
	String^ x5 = appraisedValue->Text;  
	double y5 = System::Convert::ToDouble(x5); 
	String^ x6 = downPayment->Text; 
	double y6 = System::Convert::ToDouble(x6);
	String^ x7 = loanAmount->Text; 
	double y7 = System::Convert::ToDouble(x7);
	String^ x8 = monthlyMPayment->Text; 
	double y8 = System::Convert::ToDouble(x8);  
	String^ x9 = creditScore->Text;  
	double y9 = System::Convert::ToDouble(x9); 

	double DTI; 
	DTI = ((y2 + y3 + y4) / y);     

	bool eligible;

	if (y >= 4000)
	{
		eligible = false;

		if (DTI <= 0.43)
		{
			if (y9 >= 620) 
			{
				if (y6 >= 0.20) 
				{
					eligible = true; 
				}
			}
		}
	}
	if (eligible)
	{
		finalOutput->Text = "Congrats! You are elgible to buy a home.";    
	}
	else
	{
		finalOutput->Text = "You are not elgible to buy a home.";  
	}




}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
