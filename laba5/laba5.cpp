// laba5.cpp: определяет точку входа для приложения.
//

#include "laba5.h"

using namespace std;

int main()
{	// N1
	double in = 0;
	int n = 0;
	int pl = -1;
	double mult = 1;
	double min = numeric_limits<double>::max();
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> in;
		if (in < 0 && (in - int(in)) < 0) {
			mult *= in;
			if (in < min) {
				pl = i;
				min = in;
			}
		}
	}
	if (pl != -1) {
		cout << endl << mult << endl << min << endl << pl << endl;
	}
	else {
		cout << "Таких чисел нет" << endl;
	}



	//// N2
	//int in;
	//cin >> in;
	//int curn;
	//int min = 9;
	//while (in > 0) {
	//	curn = in % 10;
	//	in = in / 10;
	//	if (curn < min) {
	//		min = curn;
	//	}
	//}
	//cout << min;

	return 0;
}
