#include "functions.h"

int main()
{
	srand(time(NULL));
	bool** Q = nullptr;
	int m{}, k{}, longest{}, ** M = nullptr;
	arr::Input(k, m);
	arr::CreateArr(Q, k, m);
	arr::CreateM(M, k, m);
	arr::FillM(Q, M, k, m);
	Q = arr::FillArr(Q, k, m);
	longest = arr::LongestSeqZero(Q, k, m);
	//M = arr::ReplaceCol(M, k, m, arr::LongestSeqZero(Q, k, m));
	
}