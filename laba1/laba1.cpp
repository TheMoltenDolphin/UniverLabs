#include <iostream>
#include <string>
#include <limits>
#include <format>
#include "Laba1.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "переменная представляет именнованный участок памяти. Переменная имеет тип, имя и значение. Тип определяет, какие именно данные может хранить переменная." << endl << "\n";

    cout << "                 min max size" << endl;
    cout << "bool -           " << "  " << numeric_limits<bool>::min() << "  "
        << numeric_limits<bool>::max() << "   " << sizeof(bool) << endl;
    cout << "char -             " << "   " << numeric_limits<char>::min() << " "
        << numeric_limits<char>::max() << "  " << sizeof(char) << endl;
    cout << "signed char -     " << "    " << numeric_limits<signed char>::min() << " "
        << numeric_limits<signed char>::max() << "  " << sizeof(signed char) << endl;
    cout << "unsigned char -   " << "  " << numeric_limits<unsigned char>::min() << "  "
        << numeric_limits<unsigned char>::max() << "   " << sizeof(unsigned char) << endl;
    cout << "wchar_t -        " << "  " << WCHAR_MIN << "  "
        << WCHAR_MAX << "   " << sizeof(wchar_t) << endl;
    cout << "char8_t -        " << "             " << sizeof(char) << endl;
    cout << "char16_t -       " << "     "
        << UINT_LEAST16_MAX << "   " << sizeof(char16_t) << endl;
    cout << "char32_t -       " << "  "
        << UINT_LEAST32_MAX << "   " << sizeof(char32_t) << endl;
    cout << "short -          " << "  " << numeric_limits<short>::min() << "  "
        << numeric_limits<short>::max() << "  " << sizeof(short) << endl;
    cout << "signed short -   " << "  " << numeric_limits<signed short>::min() << "  "
        << numeric_limits<signed short>::max() << "  " << sizeof(signed short) << endl;
    cout << "unsigned short - " << "  " << numeric_limits<unsigned short>::min() << "  "
        << numeric_limits<unsigned short>::max() << "  " << sizeof(unsigned short) << endl;
    cout << "int -            " << "  " << numeric_limits<int>::min() << "  "
        << numeric_limits<int>::max() << "  " << sizeof(int) << endl;
    cout << "signed int -     " << "  " << numeric_limits<signed int>::min() << "  "
        << numeric_limits<signed int>::max() << "  " << sizeof(signed int) << endl;
    cout << "unsigned int -   " << "  " << numeric_limits<unsigned int>::min() << "  "
        << numeric_limits<unsigned int>::max() << "  " << sizeof(unsigned int) << endl;
    cout << "long -           " << "  " << numeric_limits<long>::min() << "  "
        << numeric_limits<long>::max() << "  " << sizeof(long) << endl;
    cout << "signed long -    " << "  " << numeric_limits<signed long>::min() << "  "
        << numeric_limits<signed long>::max() << "  " << sizeof(signed long) << endl;
    cout << "unsigned long -  " << "  " << numeric_limits<unsigned long>::min() << "  "
        << numeric_limits<unsigned long>::max() << "  " << sizeof(unsigned long) << endl;
    cout << "long long -      " << "  " << numeric_limits<long long>::min() << "  "
        << numeric_limits<long long>::max() << "  " << sizeof(long long) << endl;
    cout << "signed long long - " << "  " << numeric_limits<signed long long>::min() << "  "
        << numeric_limits<signed long long>::max() << "  " << sizeof(signed long long) << endl;
    cout << "unsigned long long - " << "  " << numeric_limits<unsigned long long>::min() << "  "
        << numeric_limits<unsigned long long>::max() << "  " << sizeof(unsigned long long) << endl;
    cout << "float -              " << "  " << numeric_limits<float>::min() << "  "
        << numeric_limits<float>::max() << "  " << sizeof(float) << endl;
    cout << "double -             " << "  " << numeric_limits<double>::min() << "  "
        << numeric_limits<double>::max() << "  " << sizeof(double) << endl;
    cout << "long double -        " << "  " << numeric_limits<long double>::min() << "  "
        << numeric_limits<long double>::max() << "  " << sizeof(long double) << "\n" << endl;

    int ai = 9;
    int bi = 10;
    cout << ai + bi << endl;

    char ac = 'a';
    char bc = 'b';
    cout << char(ac + bc) << endl;

    short ash = 32767;
    short bsh = 10;
    cout << (short)(ash + bsh) << endl;

    unsigned short aush = 50000;
    unsigned short bush = 15000;
    cout << aush + bush << endl;

    unsigned int uai = 1000000000;
    unsigned int ubi = 2000000000;
    cout << uai + ubi << endl;

    long la = 10000000;
    long lb = 1021043254;
    cout << la + lb << endl;

    long long lla = 922337203685000;
    long long llb = 365567203685000;
    cout << lla + llb << endl;

    float fa = 123.345;
    float fb = 13.35943;
    cout << (double)(fa+fb) << endl;
}