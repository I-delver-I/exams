#include "Header.h"

namespace str 
{
	int CountWordsWithefinedSymbol(string text)
	{
		char s;
		int count{};
		cout << "Enter a symbol: ";
		cin.ignore();
		cin >> s;
		string word, temp;

		for (int i = 0; i <= text.size(); i++)
		{
			if (text[i] != ' ' && text[i] != '\0')
			{
				word += text[i];
			}
			else
			{
				if (word.find(s) != string::npos)
				{
					word.clear();
					count++;
				}
				else
				{
					word.clear();
				}
			}
		}
		cout << "Count of words with found symbol: " << count << endl;

		return count;
	}

	string ReconstructText(string text)
	{
		string temp = text;
		int pos{};

		for (int i = text.size() - 1; i >= 0; i--)
		{
			if (isalpha(text[i]))
			{
				temp.erase(temp.rfind(text[i]), 1);
				temp.insert(0, 1, text[i]);
			}
		}

		text = temp;

		for (int i = text.size() - 1; i >= 0; i--)
		{
			if (isdigit(text[i]))
			{
				temp.erase(temp.rfind(text[i]), 1);
				temp.insert(0, 1, text[i]);
				temp.insert(1, 1, ' ');
			}
		}

		for (int i = text.size() - 1; i >= 0; i--)
		{
			if (!isalpha(text[i]) && !isdigit(text[i]))
			{
				temp.erase(temp.rfind(text[i]), 1);
				temp.insert(0, 1, text[i]);
			}
		}
		cout << "The reconstrycted string is:" << endl << temp << endl;

		return temp;
	}

	void Input(string &text)
	{
		cout << "Enter some text with letters and digits ('?', '.', '!', and '\\0', ' ' after them are delimeters of rows):" << endl;
		getline(cin, text);
		cin.ignore();
	}

	string NormalizeStr(string text)
	{
		while (text[0] == ' ')
		{
			text.erase(0, 1);
		}

		while (text[text.size() - 1] == ' ')
		{
			text.erase(text.size() - 1, 1);
		}

		string temp = text, spaces;
		int count{};

		for (int i = 0; i < text.size(); i++)
		{
			if (text[i] == ' ')
			{
				count++;
				spaces += " ";
			}
			else if (count > 1 && text[i] != ' ')
			{
				temp.erase(temp.find(spaces), spaces.size() - 1);
				count = 0;
				spaces.clear();
			}
			else
			{
				count = 0;
				spaces.clear();
			}
		}
		cout << "Normalized string is:" << endl << temp << endl;

		return temp;
	}
}