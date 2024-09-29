// laba4.cpp: определяет точку входа для приложения.
//

#include "laba4.h"

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a < b && b < c) {
		cout << c - b - a << endl;
	}
	else if (a % c == 0) {
		cout << (a / c) + b << endl;
	}
	else {
		cout << a + b + c << endl;
	}
	
}
