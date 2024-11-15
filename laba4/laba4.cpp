// laba4.cpp: определяет точку входа для приложения.
//

#include "laba4.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b, c;
	cin >> a >> b >> c;
	if ((a < b) && (b < c)) {
		cout << c - b - a << endl;
	}
	else if ((a % c) == 0) {
		cout << (a / c) + b << endl;
	}
	else {
		cout << a + b + c << endl;
	}
	

	int code;

	cin >> code;

	switch (code)
	{
		case 1:
			cout << "Помидоры" << endl;
			break;
		case 105:
			cout << "Бананы" << endl;
			break;
		case 100923:
			cout << "Ананас" << endl;
			break;
		case 995:
			cout << "Картофель" << endl;
			break;
		case 5342:
			cout << "Молоко" << endl;
			break;
		default:
			cout << "Такого товара не существует" << endl;
	}

	int x;
	cin >> x;
	cout << ((x == -1) ? ("Число отрицательное") : ("Число положительное")) << endl;

	return 0;
}
