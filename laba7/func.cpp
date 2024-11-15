#include <iostream>
#include <algorithm>
#include "const.h"

using namespace std;

bool isPrime(int inp)
{
	if (inp < 2)
	{
		return false;
	}

	for (int i = 2; i <= sqrt(inp); i++)
	{
		if ((inp % i) == 0)
		{
			return false;
		}
	}
	return true;
}

void primeCouner(int mas[N_Max], int n)
{
	mas[N_Max] = 0;
	for (int i = 0; i < n; i++)
	{
		if (isPrime(mas[i]))
		{
			mas[N_Max] += 1;
		}
	}
}

void read(int mas[N_Max][N_Max + 1], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int inp;
			cin >> inp;
			mas[i][j] = inp;
		}
		primeCouner(mas[i], n);
	}
}

bool isTwoMax(int mas[N_Max][N_Max + 1], int n)
{
	int max = numeric_limits<int>::min();
	bool isTwoNow = false;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (mas[i][j] > max)
			{
				isTwoNow = false;
				max = mas[i][j];
			}
			else if (mas[i][j] == max)
			{
				isTwoNow = true;
			}
		}
	}

	return isTwoNow;
}

void customSort(int mas[N_Max][N_Max + 1], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (mas[i][N_Max] < mas[j][N_Max])
			{
				swap(mas[i], mas[j]);
			}
		}
	}
}

void out(int mas[N_Max][N_Max + 1], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j	< n; j++)
		{
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
}
