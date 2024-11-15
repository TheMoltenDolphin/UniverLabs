// laba8.cpp: определяет точку входа для приложения.
//

#include "laba8.h"
#include <string>
#include <fstream>
using namespace std;


bool read(int& cnt, string words[2000])
{
	ifstream in("input.txt");
	if (!in.is_open())
	{
		cerr << "File not found" << endl;
		return false;
	}
	cnt = 0;
	while (!in.eof())
	{
		in >> words[cnt];
		cnt++;
	}
	return true;
}

void cleanList(int& cnt, string words[2000])
{
	for (int i = 0; i < cnt; i++)
	{
		for (int j = 0; j < words[i].length(); j++)
		{
			if (!isalpha(words[i][j]))
			{
				words[i].erase(1, j);
				j--;
			}
		}
	}
}
void print(int cnt, string words[2000])
{
	for (int i = 0; i < cnt; i++)
		cout << words[i] << endl;
}

int main()
{
	int cnt;
	string words[2000];
	if (read(cnt, words))
		cleanList(cnt, words);
	print(cnt, words);
	return 0;
}
