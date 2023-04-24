#include <iostream>
#include "Header.h"

void replaceOnTask(int(&matrix)[8][8], int row, int col, int rowUnder, int colUnder)
{
	int buf = matrix[row][col];
	matrix[row][col] = matrix[rowUnder][colUnder];
	matrix[rowUnder][colUnder] = buf;
}