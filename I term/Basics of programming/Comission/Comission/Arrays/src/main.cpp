#include "functions.h"

int main()
{
	srand(time(NULL));
	int** Q = nullptr, *F = nullptr, *A = nullptr;
	int n{};

	arr::CreateArr(Q, n);
	arr::CreateArr(A, n);
	//F = arr::GenerateFibonacci(F);
	arr::FillArr(Q, n);
	arr::BuildA(Q, A, n);
	arr::ReplaceToSum(Q, n);
}