#include "functions.h"

namespace str
{
	// PART 3

	/*string* EraseWordsAfterStar(string* rows, int n)
	{
		for (int i = 0; i < n; i++)
		{
			string row = rows[i], word;
			bool isWord = false;

			for (int z = 1; z < rows[i].size(); z++)
			{
				if (rows[i][z] == '*' && (rows[i][z - 1] == ' ' || z - 1 == -1))
				{
					isWord = true;
				}
				else if (isWord)
				{
					word += rows[i][z];
					if (rows[i][z + 1] == ' ' || rows[i][z + 1] == '\0')
					{
						word += rows[i][z];
						row.erase(row.find(word), word.size() - 1);
						isWord = false;
						word.clear();
					}
				}
			}

			rows[i] = row;
		}
		cout << "The word-erased text is:" << endl;
		PrintText(rows, n);

		return rows;
	}*/

	// PART 2

	string* ReplaceOnSymbol(string* rows, int n, char &s)
	{
		cout << "Enter s: ";
		cin >> s;
		cin.ignore();

		for (int i = 0; i < n; i++)
		{
			int h{};
			string row = rows[i];

			while (row[h] != '\0')
			{
				if (row[h] == s)
				{
					row[h] = '*';
				}
				h++;
			}

			rows[i] = row;
		}
		cout << "The edited text is:" << endl;
		PrintText(rows, n);

		return rows;
	}

	// PART 1

	string * Normalize(string* rows, int n)
	{
		for (int i = 0; i < n; i++)
		{
			string row = rows[i], spaces;

			while (row[0] == ' ')
			{
				row.erase(0, 1);
			}

			while (row[row.size() - 1] == ' ')
			{
				row.erase(row.size() - 1, 1);
			}

			rows[i] = row;

			for (int z = 0; z < rows[i].size(); z++)
			{
				if (rows[i][z] == ' ')
				{
					spaces += " ";
				}
				else if (spaces.size() > 1)
				{
					row.erase(row.find(spaces), spaces.size() - 1);
					spaces.clear();
				}
				else
				{
					spaces.clear();
				}
			}

			rows[i] = row;
		}
		cout << "The normalized text is:" << endl;
		PrintText(rows, n);

		return rows;
	}

	void PrintText(string* rows, const int n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << rows[i] << endl;
		}
	}

	void Input(string * &rows, int &n)
	{
		do
		{
			cout << "Enter n: ";
			cin >> n;
			cin.ignore();
		} while (n < 1);

		rows = new string[n];

		for (int i = 0; i < n; i++)
		{
			getline(cin, rows[i]);
		}
	}
}