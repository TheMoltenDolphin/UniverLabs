// dop1.cpp: определяет точку входа для приложения.
//
#include <iostream>
using namespace std;

int main()
{

	int q1, q2, p1, p2, a;
	cin >> q1 >> p1 >> q2 >> p2 >> a;

	int cost = 0;

	while (a > 0)
	{
		if (((a / q2 + (a % q2 != 0)) * p2) < ((a / q1 + (a % q1 != 0)) * p1))
		{
			a -= q2;
			cost += p2;
		}
		else
		{
			a -= q1;
			cost += p1;
		}
	}



	//if (double(p2 / q2 * 1.00f) <= double(p1 / q1 * 1.00f))
	//{
	//	while (a >= q2)
	//	{
	//		a -= q2;
	//		cost += p2;
	//	}
	//}
	//else if (double(p2 / q2 * 1.00f) > double(p1 / q1 * 1.00f))
	//{
	//	while (a >= q1)
	//	{
	//		a -= q1;
	//		cost += p1;
	//	}
	//}

	cout << cost << " " << a << endl;




}
