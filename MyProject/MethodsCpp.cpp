#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <windows.h>

using namespace std;

void Shell(long int* A, int n, int &counts) //сортировка Шелла
{
	int i, j, d, count;
	d = n;
	d = d / 2;
	while (d > 0)
	{
		for (i = 0; i < n - d; i++)
		{
			j = i;
			while (j >= 0 && A[j] > A[j + d])
			{
				count = A[j];
				A[j] = A[j + d];
				A[j + d] = count;
				j--;
				counts++;
			}
		}
		d = d / 2;
	}
}

long int* Reading(long int* arrayNumb, int size, std::string path)
{
	int count = 0;
	string line;
	string text;
	ifstream in(path);

	if (in.is_open())
	{
		while (getline(in, line))
		{
			long int number = stoi(line);
			arrayNumb[count] = number;
			count++;
		}
	}
	in.close();
	return arrayNumb;
}