#pragma once
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;



namespace arr
{
	void FillArr(int** M, const int ROW, const int COL);
	int** CreateArr(int& row, int& col);
	int** SortCol(int** M, const int P, const int K);
	int* BuildMultArr(int** M, const int P, const int K, int* Y, const int SIZE);
	template<class T>
	void PrintArr(T** M, const int P, const int K);
	template<class T>
	void PrintArr(T* Y, const int S);
}