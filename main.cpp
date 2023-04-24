#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
//14 вариант
using namespace std;
void print(int (& arr)[10][10]) 
{
 for (int i{}; i < 10; i++) 
 {
 for (int j{}; j < 10; j++) 
 {
 cout << setw(5) << arr[i][j];
 }
 cout << endl;
 }
 cout << endl;
}
void swap(int &first, int &second)
{
 int buf = first;
 first = second;
 second = buf;
}
void createRandomMatrix(int (& matrix)[10][10])
{
 for (int i{}; i < 10; i++)
 {
 for (int j{}; j < 10; j++)
 {
 matrix[i][j] = rand() % 21 - 10;
 }
 }
};
void sumIf(int (& arr)[10][10], int &sum)
{
 for (int i{}; i < 10; i++)
 {
 for (int j{}; j < 10; j++)
 {
 if (i >= j && arr[i][j] < 0)
 {
 sum += arr[i][j];
 }
 }
 }
};
void replaceToVector(int (&arr)[10][10], int vector[10])
{
 for (int i{}; i < 10; i++)
 {
 bool ok = 1;
 for (int j{}; j < 10; j++)
 {
 if (arr[i][j] != 0)
 {
 ok = 0;
 break;
 }
 }
 if (ok) 
 {
 for (int j{}; j < 10; j++) 
 {
 arr[i][j] = vector[j];
 }
 }
 }
}
void replaceOnTask(int (&matrix)[10][10])
{
 for (int i{}; i < 10; i++)
 {
 for (int j{}; j < 10; j++)
 {
 for (int p = j + 1; p < 10; p++)
 {
 if ((matrix[i][j] == 0) && (matrix[i][p] != 0))
 {
 swap(matrix[i][j], matrix[i][p]);
 }
 else if ((matrix[i][j] >= 0) && (matrix[i][p] < 0))
 {
 swap(matrix[i][j], matrix[i][p]);
 }
 }
 }
 }
}
int main(){
 int matrix[10][10], sum{}, vector [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 srand(time(0));
 createRandomMatrix(matrix);
 print(matrix);
 replaceToVector(matrix, vector);
 replaceOnTask(matrix);
 print(matrix);
 sumIf(matrix, sum);
 cout << "Summa = " << sum << endl;
 return 0;
}
