#include <iostream>
#include "Header.h"

void createRandomMatrix(int(&matrix)[8][8])
{
	for (int i{}; i < 8; i++)
	{
		for (int j{}; j < 8; j++)
		{
			matrix[i][j] = rand() % 19 - 9;
		}
	}
}