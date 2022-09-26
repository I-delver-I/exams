#include "functions.h"

namespace arr
{
	// PART 4

	

	// PART 3

	/*int** ReplaceCol(int **M, const int k, const int m, const int colIndex)
	{
		for (int i = 0; i < k; i++)
		{
			M[k][colIndex] = k - colIndex;
		}
		cout << "The array with replaced column is:" << endl;
		PrintM(M, k, m);

		return M;
	}*/

	void CreateM(int **&M, const int k, const int m)
	{
		M = new int* [k];
		for (int z = 0; z < m; z++)
		{
			M[z] = new int[m];
		}
	}

	void FillM(bool **Q, int **M, const int k, const int m)
	{
		for (int i = 0; i < k; i++)
		{
			for (int z = 0; z < m; z++)
			{
				M[i][z] = Q[i][z];
			}
		}
		cout << "Created M:" << endl;
		PrintM(M, k, m);
	}

	void PrintM(int** M, const int k, const int m)
	{
		for (int i = 0; i < k; i++)
		{
			for (int z = 0; z < m; z++)
			{
				cout << setw(5) << M[i][z];
			}
			cout << endl;
		}
	}

	// PART 2

	int LongestSeqZero(bool** Q, const int k, const int m)
	{
		int count{}, max{}, longest{};

		for (int i = 0; i < m; i++)
		{
			for (int z = 0; z < k; z++)
			{
				if (Q[z][i] == 0)
				{
					count++;
				}
			}

			if ((max == 0 && count != 0) || max < count)
			{
				max = count;
				longest = i;
				
			}
			count = 0;
		}
		cout << "The index of sequnce column is: " << longest << ". It has " << max << " zeroes" << endl;


		return longest;
	}

	// PART 1

	bool** FillArr(bool **Q, const int k, const int m)
	{
		for (int i = 0; i < k; i++)
		{
			for (int z = 0; z < m; z++)
			{
				Q[i][z] = rand() % 2;
			}
		}
		cout << "Created array is:" << endl;
		PrintArr(Q, k, m);

		return Q;
	}

	void PrintArr(bool** Q, const int k, const int m)
	{
		for (int i = 0; i < k; i++)
		{
			for (int z = 0; z < m; z++)
			{
				cout << setw(5) << Q[i][z];
			}
			cout << endl;
		}
	}

	void CreateArr(bool **&Q, const int k, const int m)
	{
		Q = new bool* [k];
		for (int i = 0; i < k; i++)
		{
			Q[i] = new bool[m];
		}
	}

	void Input(int &k, int &m)
	{
		
		do
		{
			cout << "Enter k: ";
			cin >> k;
			cin.ignore();
		} while (k <= 0);
		
		do
		{
			cout << "Enter m: ";
			cin >> m;
			cin.ignore();
		} while (m <= 0);
	}
}