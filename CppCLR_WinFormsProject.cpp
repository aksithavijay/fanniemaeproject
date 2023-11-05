#include "pch.h"
#include <iostream> 
#include <iomanip> 
#include <string>

using namespace System;

/* 
int main(array<System::String ^> ^args) {
	double gmi, ccPayment, carPayment, slPayment, appraisedValue, downPayment, loanAmount, monthlyMPayment, creditScore; 
	gmi = 0; 
	ccPayment = 0; 
	carPayment = 0; 
	slPayment = 0; 
	appraisedValue = 0; 
	downPayment = 0; 
	loanAmount = 0; 
	monthlyMPayment = 0; 
	creditScore = 0; 
	return 0;
}
*/ 

#include "Form1.h"

using namespace System::Windows::Forms;

[STAThread]
int main()
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew CppCLRWinFormsProject::Form1());
  return 0;
}