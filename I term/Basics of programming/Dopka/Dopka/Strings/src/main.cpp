#include "functions.h"

int main()
{
	string* rows = nullptr;
	int n{};
	char s;

	str::Input(rows, n);
	rows = str::Normalize(rows, n);
	rows = str::ReplaceOnSymbol(rows, n, s);
	//rows = str::EraseWordsAfterStar(rows, n);
}