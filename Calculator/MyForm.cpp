#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Calculator::MyForm form;
	Application::Run(% form);
	return 0;
}

bool Calculator::MyForm::IsOperOrFB() {
	return this->textEx->Text->EndsWith("/") || this->textEx->Text->EndsWith("*") || this->textEx->Text->EndsWith("(") ||
	 this->textEx->Text->EndsWith("-") || this->textEx->Text->EndsWith("+") || this->textEx->Text->EndsWith(",");
}

double Calculator::MyForm::GetNum(System::String^ exp) {
	double num;
	if (exp == "e")
		num = eNum;
	else {
		if (exp == "pi")
			num = piNum;
		else num = Double::Parse(exp);
	}
	return num;
}

void Calculator::MyForm::DoMultOrDiv(const char oper, System::String^ strNum, double &exp){
	double num;
	switch (oper)
	{
	case '*':
		num = GetNum(strNum);
		exp *= num;
		break;
	case '/':
		num = GetNum(strNum);
		exp /= num;
		break;
	default:
		break;
	}
}

bool Calculator::MyForm::HaveOperBetweenBrackets() {
	int posFB = this->textEx->Text->LastIndexOf("(");
	if (posFB != -1) {
		System::String^ str = this->textEx->Text->Substring(posFB);
		array<wchar_t>^ anyOf = { L'+', L'-', L'/', L'*' };
		int flag = str->IndexOfAny(anyOf);
		if (flag != -1)
			return true;
	}
	return false;
}

double Calculator::MyForm::SolveExp(System::String^ strExp) {
	double result = 0;
	System::Collections::Generic::List<System::String^> exps;
	std::vector<wchar_t> opers;

	array<wchar_t>^ plusOrMinus = { L'+', L'-' };
	int flag = strExp->IndexOfAny(plusOrMinus);
	while (flag != -1)
	{
		System::String^ exp = strExp->Substring(0, flag);
		exps.Add(exp);
		opers.push_back(strExp[flag]);
		strExp = strExp->Remove(0, flag+1);
		flag = strExp->IndexOfAny(plusOrMinus);
	}
	exps.Add(strExp);
	
	array<wchar_t>^ MultOrDiv = { L'*', L'/' };
	for (size_t i = 0; i != exps.Count; ++i)
	{
		if (exps[i] == "" && strExp[0]) {
			inverse = true;
			continue;
		}
		flag = exps[i]->IndexOfAny(MultOrDiv);
		if (flag == -1 && i == 0) {
			result = GetNum(exps[i]);
			if (inverse && !expInBrackets)
				result = 0.0 - result;
			continue;
		}
		double firstNum;
		if (flag != -1) {
			System::String^ tmp = exps[i]->Substring(0, flag);
			double num = GetNum(tmp);
			firstNum = num;
			if (i == 0 && inverse && !expInBrackets)
				firstNum = 0.0 - num;
		}
		else {
			double num;
			switch (opers[i-1])
			{
			case '+':
				num = GetNum(exps[i]);
				result += num;
				break;
			case '-':
				num = GetNum(exps[i]);
				result -= num;
				break;
			default:
				break;
			}
			continue;
		}

		while (flag != -1)
		{
			wchar_t oper = exps[i][flag];
			exps[i] = exps[i]->Remove(0, flag+1);
			int secondOper = exps[i]->IndexOfAny(MultOrDiv);
			if (secondOper != -1)
			{
				System::String^ tmp = exps[i]->Substring(0, flag);
				DoMultOrDiv(oper, tmp, firstNum);
			}
			else {
				DoMultOrDiv(oper, exps[i], firstNum);
			}
			flag = exps[i]->IndexOfAny(MultOrDiv);
		}

		AddToResult(result, firstNum, i, opers);
	}

	return result;
}

void Calculator::MyForm::AddToResult(double &result, double firstNum, int ind, std::vector<wchar_t> opers) {
	if (!opers.empty() && ind != 0) {
		switch (opers[ind - 1])
		{
		case '+':
			result += firstNum;
			break;
		case '-':
			result -= firstNum;
			break;
		default:
			break;
		}
	}
	else result = firstNum;
}

System::Void Calculator::MyForm::button_eq_Click(System::Object^ sender, System::EventArgs^ e) //равенство - основная часть
{
	double result;
	if (firstBracketCount != secondBracketCount) {
		MessageBox::Show("Check input", "Error");
		return;
	}
	System::String^ str = this->textEx->Text;
	if (str[0] == '-') {
		inverse = true;
		str = str->Remove(0, 1);
	}
	else inverse = false;

	std::vector<std::pair<char, double>> bracketExps;
	int posFB = str->LastIndexOf("(");
	int posSB = str->IndexOf(")", posFB + 1);
	System::String^ tmp;
	expInBrackets = true;
	while (posFB != -1 && posSB != -1) {
		tmp = str->Substring(posFB + 1, posSB - posFB - 1);
		double res = SolveExp(tmp);
		str = str->Remove(posFB, posSB - posFB + 1);
		str = str->Insert(posFB, res.ToString());
		posFB = str->LastIndexOf("(");
		posSB = str->IndexOf(")", posFB + 1);
	}
	expInBrackets = false;
	if (!(str[0] == '-' && str->IndexOf("-", 1) < 0 && str->IndexOf("+") < 0 && str->IndexOf("*") < 0 && str->IndexOf("/") < 0)) {
		result = SolveExp(str);
		this->textRes->Text = result.ToString();
	}
	else this->textRes->Text = str;
	firstBracketCount = secondBracketCount = 0;
}

bool Calculator::MyForm::SameNumHaveComma() {
	array<wchar_t>^ anyOf = { L'+', L'-', L'/', L'*', L'(' };
	int pos = this->textEx->Text->IndexOfAny(anyOf);
	if (pos != -1) {
		System::String^ str = this->textEx->Text->Substring(pos);
		int commaPos = str->IndexOf(",");
		if (commaPos != -1)
			return true;
	}
	else {
		int commaPos = this->textEx->Text->IndexOf(",");
		if (commaPos != -1)
			return true;
	}
	return false;
}

System::Void Calculator::MyForm::button_0_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textEx->Text != "0") {
		this->textEx->Text += "0";
	}
	
}
System::Void Calculator::MyForm::button_1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textEx->Text == "0") {
		this->textEx->Clear();
	}
	this->textEx->Text += "1";
}
System::Void Calculator::MyForm::button_2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textEx->Text == "0") {
		this->textEx->Clear();
	}
	this->textEx->Text += "2";
}
System::Void Calculator::MyForm::button_3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textEx->Text == "0") {
		this->textEx->Clear();
	}
	this->textEx->Text += "3";
}
System::Void Calculator::MyForm::button_4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textEx->Text == "0") {
		this->textEx->Clear();
	}
	this->textEx->Text += "4";
}
System::Void Calculator::MyForm::button_5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textEx->Text == "0") {
		this->textEx->Clear();
	}
	this->textEx->Text += "5";
}
System::Void Calculator::MyForm::button_6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textEx->Text == "0") {
		this->textEx->Clear();
	}
	this->textEx->Text += "6";
}
System::Void Calculator::MyForm::button_7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textEx->Text == "0") {
		this->textEx->Clear();
	}
	this->textEx->Text += "7";
}
System::Void Calculator::MyForm::button_8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textEx->Text == "0") {
		this->textEx->Clear();
	}
	this->textEx->Text += "8";
}
System::Void Calculator::MyForm::button_9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textEx->Text == "0") {
		this->textEx->Clear();
	}
	this->textEx->Text += "9";
}

System::Void Calculator::MyForm::button_clear_Click(System::Object^ sender, System::EventArgs^ e)
{
		this->textEx->Text = "0";
		this->textRes->Clear();
		firstBracketCount = secondBracketCount = 0;
}

System::Void Calculator::MyForm::button_invert_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->textEx->Text == "0") {
		this->textEx->Clear();
		this->textEx->Text = "-";
	}
	else {
		if (this->textEx->Text[0] == '-')
			this->textEx->Text = this->textEx->Text->Remove(0, 1);
		else
			this->textEx->Text = "-" + this->textEx->Text;
	}
}

System::Void Calculator::MyForm::button_div_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!IsOperOrFB()) {
		this->textEx->Text += "/";
	}
	else MessageBox::Show("Check input", "Error");
}

System::Void Calculator::MyForm::button_mult_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!IsOperOrFB()) {
		this->textEx->Text += "*";
	}
	else MessageBox::Show("Check input", "Error");
}

System::Void Calculator::MyForm::button_minus_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!IsOperOrFB()) {
		this->textEx->Text += "-";
	}
	else MessageBox::Show("Check input", "Error");
}

System::Void Calculator::MyForm::button_plus_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!IsOperOrFB()) {
		this->textEx->Text += "+";
	}
	else MessageBox::Show("Check input", "Error");
}

System::Void Calculator::MyForm::button_fb_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->textEx->Text == "0") {
		this->textEx->Clear();
	}
	if (IsOperOrFB() || this->textEx->Text == "") {
		this->textEx->Text += "(";
		++firstBracketCount;
	}
	else MessageBox::Show("Check input", "Error");
}

System::Void Calculator::MyForm::button_sb_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->textEx->Text == "0") {
		this->textEx->Clear();
	}
	if (firstBracketCount > 0 && !IsOperOrFB() && HaveOperBetweenBrackets() && firstBracketCount > secondBracketCount) {
		this->textEx->Text += ")";
		++secondBracketCount;
	}
	else MessageBox::Show("Check input", "Error");
}

System::Void Calculator::MyForm::button_e_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->textEx->Text == "0") {
		this->textEx->Clear();
	}
	if (IsOperOrFB()|| this->textEx->Text == "")
		this->textEx->Text += "e";
	else
		MessageBox::Show("Check input", "Error");
}

System::Void Calculator::MyForm::button_pi_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->textEx->Text == "0") {
		this->textEx->Clear();
	}
	if (IsOperOrFB() || this->textEx->Text == "")
		this->textEx->Text += "pi";
	else
		MessageBox::Show("Check input", "Error");
		
}

System::Void Calculator::MyForm::button_comma_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!IsOperOrFB() && !SameNumHaveComma() && !this->textEx->Text->EndsWith(")") && 
		!this->textEx->Text->EndsWith("e") && !this->textEx->Text->EndsWith("pi")) {
		this->textEx->Text += ",";
	}
	else MessageBox::Show("Check input", "Error");
}
