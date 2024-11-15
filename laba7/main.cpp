// laba7.cpp: определяет точку входа для приложения.
//

#include "main.h"

using namespace std;

int main()
{
	int n;
	cin >> n;
	int mas[N_Max][N_Max + 1];
	read(mas, n);
	if (isTwoMax(mas, n))
	{
		customSort(mas, n);
	}
	out(mas, n);
}
