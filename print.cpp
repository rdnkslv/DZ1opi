#include <iostream>
#include <iomanip>
#include "Header.h"
using namespace std;

void print(int(&arr)[8][8])
{
	for (int i{}; i < 8; i++)
	{
		for (int j{}; j < 8; j++)
		{
			cout << setw(5) << arr[i][j];
		}
		cout << endl;
	}
	cout << endl;
}