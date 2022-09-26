#pragma once
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

namespace arr
{
	void CreateArr(int**& Q, int& n);
	int* GenerateFibonacci(int* F);
	int FibNum(int* F, const int n);
	void PrintArr(int** Q, const int n);
	void CreateArr(int*& A, const int n);
	void FillArr(int** Q, const int n);
	void PrintArr(int** Q, const int n);
	void PrintArr(int* F, const int n);
	void BuildA(int** Q, int* A, const int n);
	int SumOfDigits(int n);
	void ReplaceToSum(int** Q, const int n);

}