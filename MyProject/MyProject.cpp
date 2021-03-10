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
	int const size = 21100;
	int coun = 0;

	for (int i = 0; i < 50; i++)
	{
		long int array3[size] {  };
		string pathh = "C:\\Users\\ilia7\\Desktop\\MyProject\\Numbers\\Numbers"+ to_string(i) + ".txt";

		Reading(array3, size, pathh);

		double start = GetTickCount();
		Shell(array3, size, coun);
		double finish = GetTickCount();

		cout << to_string(i + 1) + " " + "Время сортировки "  << (finish - start) << " Иттерации: "<< coun << endl;
		coun = 0;
	}
}