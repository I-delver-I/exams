#pragma once
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

namespace arr
{
	bool** FillArr(bool** Q, const int k, const int m);
	void PrintArr(bool** Q, const int k, const int m);
	void CreateArr(bool**& Q, const int k, const int m);
	void Input(int& k, int& m);
	int LongestSeqZero(bool** Q, const int k, const int m);
	// int** ReplaceCol(int** M, const int k, const int m, const int colIndex);
	void PrintM(int** M, const int k, const int m);
	void FillM(bool** Q, int** M, const int k, const int m);
	void CreateM(int**& M, const int k, const int m);

}
