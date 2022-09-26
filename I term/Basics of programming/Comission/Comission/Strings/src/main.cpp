#include "functions.h"

int main()
{
	string* rows = nullptr;
	int n{}, shortest{}, count{};

	str::Input(rows, n);
	shortest = str::NumberOfRowWithShortestWord(rows, n);
	count = str::CountOnlyNumbersWords(rows, n);
}