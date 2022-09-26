#include "Header.h"

namespace arr {

	int* BuildMultArr(int **M, const int P, const int K, int *Y, const int SIZE)
	{
		int mult = 1, a{}, b{};
		cout << "Enter a: ";
		cin >> a;
		cin.ignore();
		cout << "Enter b: ";
		cin >> b;


		for (int i = 0; i < P; i++)
		{
			for (int z = 0; z < K; z++)
			{
				if (abs(M[i][z]) >= a && abs(M[i][z]) <= b)
				{
					mult *= abs(M[i][z]);
				}
			}
			Y[i] = mult;
			mult = 1;
		}
		cout << "The Y is: ";
		PrintArr(Y, SIZE);

		return Y;
	}

	int** SortCol(int** M, const int P, const int K)
	{
		int temp{};
		for (int i = 0; i < K; i++)
		{
			for (int x = 0; x < P; x++)
			{
				for (int z = 0; z < P - 1; z++)
				{
					if (abs(M[z][i]) > abs(M[z + 1][i]))
					{
						temp = M[z + 1][i];
						M[z + 1][i] = M[z][i];
						M[z][i] = temp;
					}
				}
			}
		}
		cout << "The sorted array is: " << endl;
		PrintArr(M, P, K);

		return M;
	}

	void FillArr(int** M, const int ROW, const int COL)
	{
		for (int i = 0; i < ROW; i++)
		{
			for (int z = 0; z < COL; z++)
			{
				M[i][z] = rand() % 56 - 20;
			}
		}

		PrintArr(M, ROW, COL);
	}

	int** CreateArr(int &row, int &col)
	{
		cout << "Enter p: ";
		cin >> row;
		cin.ignore();
		cout << "Enter k: ";
		cin >> col;
		
		int **M = new int* [row];
		for (int i = 0; i < row; i++)
		{
			M[i] = new int[col];
		}

		return M;
	}

	template<class T>
	void PrintArr(T ** M, const int P, const int K)
	{
		for (int i = 0; i < P; i++)
		{
			for (int z = 0; z < K; z++)
			{
				cout << setw(6) << M[i][z];
			}
			cout << endl;
		}
	}

	template<class T>
	void PrintArr(T *Y, const int S)
	{
		for (int i = 0; i < S; i++)
		{
			cout << Y[i] << " ";
		}
		cout << endl;
	}
}