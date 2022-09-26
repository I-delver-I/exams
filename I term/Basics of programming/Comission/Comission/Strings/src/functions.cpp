#include "functions.h"

namespace str
{
	// TASK 3

	int CountOnlyNumbersWords(string* rows, const int n)
	{
		int count{};

		for (int i = 0; i < n; i++)
		{
			string row = rows[i];
			bool isWord = false, isDigit = false;

			for (int z = 0; z < row.size(); z++)
			{
				if (row[z] != ' ' && row[z] != '\0')
				{
					isWord = true;
				}

				if (isWord)
				{
					if (isdigit(row[z]))
					{
						isDigit = true;
					}
				}

				else if ((row[z] = ' ' || row[z] == '\0') && isDigit)
				{
					isWord = false;
					isDigit = false;
					count++;
				}
			}


		}
		cout << "The count of words is: " << count << endl;


		return count;
	}

	// TASK 2

	void EraseShortestWord(string *rows, int rowIndex, string word, const int n)
	{
		rows[rowIndex].erase(rows[rowIndex].find(word), word.size());
		cout << "The text with erased word:" << endl;
		PrintText(rows, n);
	}

	// TASK 1

	int NumberOfRowWithShortestWord(string* rows, const int n)
	{
		string shortestWord;
		int num, rowWithShortestWord;

		for  (int i = 0; i < n; i++)
		{
			string row = rows[i], word;
			bool isWord = false;

			for (int z = 0; z < row.size(); z++)
			{
				if (row[z] != ' ')
				{
					isWord = true;
				}
				else if (row[z] == ' ')
				{
					isWord = false;
					if (shortestWord.empty())
					{
						shortestWord = word;
						rowWithShortestWord = i;
						num = i;
					}
					else if (shortestWord.size() > word.size())
					{
						shortestWord = word;
						rowWithShortestWord = i;
						num = i;
					}

					word.clear();
				}

				if (isWord)
				{
					word += row[z];
				}
			}
		}
		cout << "The index of row with shorstes word is: " << num << endl;
		EraseShortestWord(rows, rowWithShortestWord, shortestWord, n);

		return num;
	}

	// Creation

	void PrintText(string* rows, const int n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << rows[i] << endl;
		}
	}

	void Input(string *&rows, int &n)
	{
		cout << "Enter the count of rows: ";
		cin >> n;
		cin.ignore();

		rows = new string[n];

		for (int i = 0; i < n; i++)
		{
			getline(cin, rows[i]);
		}
	}
}