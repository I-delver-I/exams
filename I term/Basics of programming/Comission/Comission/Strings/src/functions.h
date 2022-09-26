#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace str
{
	void Input(string*& rows, int& n);
	int NumberOfRowWithShortestWord(string* rows, const int n);
	void PrintText(string* rows, const int n);
	void EraseShortestWord(string* rows, int rowIndex, string word, const int n);
	int CountOnlyNumbersWords(string* rows, const int n);

}