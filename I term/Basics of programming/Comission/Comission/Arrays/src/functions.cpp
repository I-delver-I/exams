#include "functions.h"

namespace arr
{
	// TASK 2

	void ReplaceToSum(int**Q, const int n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int z = 0; z < n; z++)
			{
				Q[i][z] = SumOfDigits(Q[i][z]);
			}
		}
		cout << "Replaced arr is: " << endl;
		PrintArr(Q, n);
	}

	int SumOfDigits(int n)
	{
		int sum{};

		while (n != 0)
		{
			sum += n % 10;
			n /= 10;
		}
		cout << "Sum of digits: " << sum << endl;

		return sum;
	}

	// TASK 1

	void BuildA(int** Q, int *A, const int n)
	{
		int sum{};

		for (int i = 0; i < n; i++)
		{
			for (int z = 0; z < n; z++)
			{
				sum += Q[i][z];
			}

			A[i] = sum;
			sum = 0;
		}
		cout << "A is:" << endl;
		PrintArr(A, n);
	}


	// Creation

	/*int** FillArr(int ** Q, int *F, const int n)
	{
		for (int i = 0; i < n; i++)
		{
			Q[0][i] = F[i];
		}

		for (int i = 1; i < n; i++)
		{
			for (int z = 0; z < n; z++)
			{
				Q[z][i] = FibNum(F, Q[z - 1][i]);
			}
		}
		cout << "Q is:" << endl;
		PrintArr(Q, n);

		return Q;
	}*/

	void FillArr(int **Q, const int n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int z = 0; z < n; z++)
			{
				Q[i][z] = rand() % 100 - 50;
			}
		}
	}

	void PrintArr(int **Q, const int n)
	{
		for (int i = 1; i < n; i++)
		{
			for (int z = 0; z < n; z++)
			{
				cout << setw(6) << Q[i][z];
			}
			cout << endl;
		}
	}

	void PrintArr(int *F, const int n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << F[i] << " ";
		}
	}

	int FibNum(int *F, const int n)
	{
		int i = 0, num{};

		while (F[i] <= n)
		{
			num = F[i];
			i++;
		}

		return num;
	}

	int* GenerateFibonacci(int *F)
	{
		int num1 = 0, num2 = 1, temp = 2;
		F = new int[50];
		F[0] = 0;
		F[1] = 1;

		for (int i = 1; i < 50; i++)
		{
			if (num1 + num2 == i)
			{
				num1 = num2;
				num2 = i;
				F[temp] = i;
				temp++;
			}
		}
		cout << "Fibonacci row is:" << endl;
		PrintArr(F, 50);

		return F;
	}

	void CreateArr(int *&A, const int n)
	{
		A = new int[n];
	}

	void CreateArr(int ** &Q, int &n)
	{
		cout << "Enter n: ";
		cin >> n;
		cin.ignore();

		Q = new int* [n];
		for (int i = 0; i < n; i++)
		{
			Q[i] = new int[n];
		}
	}
}