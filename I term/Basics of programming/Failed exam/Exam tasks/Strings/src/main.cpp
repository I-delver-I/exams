#include "Header.h"

int main()
{
	string text;
	int count{};

	str::Input(text);
	text = str::NormalizeStr(text);
	text = str::ReconstructText(text);
	count = str::CountWordsWithefinedSymbol(text);
}