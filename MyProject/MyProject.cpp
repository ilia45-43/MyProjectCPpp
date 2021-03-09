#include <iostream>
#include <fstream>
#include <string>
#include "Methods.h"
#include <windows.h>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int const size = 40000;
	long int array3[size];
	int coun = 0;

	for (int i = 0; i < 50; i++)
	{
		string s = to_string(i);
		string t = "Numbers";

		string pathh = "C:\\Users\\ilia7\\Desktop\\MyProject\\Numbers\\" + t + s + ".txt";

		Reading(array3, size, pathh);

		double start = GetTickCount();
		Shell(array3, size, coun);
		double finish = GetTickCount();

		cout << to_string(i + 1) + " " + "Время сортировки "  << (finish - start) << " Иттерации: "<< coun << endl;
		//cout << to_string(i + 1) + " " << coun << endl;
		coun = 0;
	}
}