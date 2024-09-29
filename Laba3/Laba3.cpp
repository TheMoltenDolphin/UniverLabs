// Laba3.cpp: определяет точку входа для приложения.
//

#include "Laba3.h"
#include <string>

using namespace std;



int main()
{
	int inp, num;
	int res;
	cin >> inp >> num;
	res = 1 << (num - 1);
	res = inp & ~res;
	cout << res;

}





// ~





























//string To2nd(int input) {
//	string number2nd;
//	while (input > 0) {
//		number2nd = to_string(input % 2) + number2nd;
//		input = input / 2;
//	}
//
//	return number2nd;
//}
//
//string SetByteToZero(string input, int ByteNum) {
//	string Res2nd;
//	for (int i = 0; i < input.size(); i++) {
//		if (i == ByteNum) {
//			Res2nd = "0" + Res2nd;
//		}
//		else {
//			Res2nd = input[i] + Res2nd;
//		}
//	}
//	return Res2nd;
//}
//
//int to10th(string input) {
//	int res = 0;
//	for (int i = 0; i < input.size(); i++) {
//		if (input[i] != '0') {
//			res = res + pow(2, input.size()- i - 1);
//		}
//	}
//	return res;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	int x;
//	int it;
//	cout << "Введите число x и число i через пробел" << endl;
//	cin >> x;
//	cin >> it;
//	cout << To2nd(x) << endl;
//	cout << SetByteToZero(To2nd(x), it) << endl;
//	cout << to10th(SetByteToZero(To2nd(x), it)) << endl;
//}

