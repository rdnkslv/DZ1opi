#pragma once
#ifndef Header
#define Header
void print(int(&)[8][8]);
void createRandomMatrix(int(&)[8][8]);
int minValueOnSideDiagonal(int(&)[8][8], int&, int&);
int minValueUnderSideDiagonal(int(&)[8][8], int&, int&);
void replaceOnTask(int(&)[8][8], int, int, int, int);
#endif