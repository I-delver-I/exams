#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace str
{
	void Input(string*& rows, int& n);
	string* Normalize(string* rows, int n);
	void PrintText(string* rows, const int n);
	string* ReplaceOnSymbol(string* rows, int n, char& s);
	//string* EraseWordsAfterStar(string* rows, int n);

}