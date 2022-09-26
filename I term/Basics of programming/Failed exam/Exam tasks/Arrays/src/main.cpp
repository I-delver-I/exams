#include "Header.h"

int main()
{
	srand(time(NULL));
	int p{}, k{}, ** M = arr::CreateArr(p, k), * Y = new int[p];
	arr::FillArr(M, p, k);
	M = arr::SortCol(M, p, k);
	Y = arr::BuildMultArr(M, p, k, Y, p);
}