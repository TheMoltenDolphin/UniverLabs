// laba2.cpp: определяет точку входа для приложения.
//

#include "laba2.h"
#include <string>

using namespace std;

//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	cout << "Введите три числа через пробел" << endl;
//	
//	int V = 1;
//	short inp;
//	string InputSymb;
//	string ci;
//	getline(cin, InputSymb);
//	int c = 0;
//	for (int i = 0; i < InputSymb.size(); i++) {
//
//		if (InputSymb[i] != ' ') {
//			ci += InputSymb[i];
//			if (c == 3) {
//				cout << "Вы ввели больше чем 3 значения!";
//				return 0;
//			}
//			if (ci.size() >= 5 or (ci.find("-") != -1)) {
//				cout << "Значения должны быть в меньше 10^4 и больше 0!!!";
//				return 0;
//			}
//			if (c < 3 and i == InputSymb.size() - 1) {
//				int intsi = stoi(ci);
//				if (intsi > 0) {
//					V = V * stoi(ci);
//					c = c + 1;
//				}
//			}
//		}
//		else if ((i != 0) and c < 3 and InputSymb[i] != ' ') {
//			V = V * stoi(ci);
//			c = c + 1;
//			ci.clear();
//		}
//		
//	}
//
//	cout << "Объём параллелепипеда : " << V << endl;
//}





int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите три числа через Enter" << endl;

	short c[3]{ 0 };
	short inp;
	for (int i = 0; i < 3; i++) {

		cin >> inp;
		c[i] = inp;
		if ((inp >= pow(10, 4)) || (inp <= 0)) {
			cout << "Значение должно быть в пределах 10^4 и больше 0!!!";
			return 0;
		}
	}

	int V = c[0] * c[1] * c[2];
	cout << "Объём параллеле пипеда : " << V << endl;
}