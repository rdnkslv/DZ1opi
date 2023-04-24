#include <iostream>
#include <iomanip>
#include "Header.h"

using namespace std;

int main() {
	system("chcp 1251");
	int matrix[8][8];
	int row{}, col{}, rowUnder{}, colUnder{};

	createRandomMatrix(matrix);
	print(matrix);

	int minOn = minValueOnSideDiagonal(matrix, row, col), minUnder = minValueUnderSideDiagonal(matrix, rowUnder, colUnder);
	
	cout << "Минимальное значение на побочной диагонали: " << minOn << " Строка " << row + 1 << " Столбец " << col + 1 << endl;
	cout << "Минимальное значение под побочной диагональю: " << minUnder << " Строка " << rowUnder + 1 << " Столбец " << colUnder + 1 << endl;
	replaceOnTask(matrix, row, col, rowUnder, colUnder);
	print(matrix);
}
