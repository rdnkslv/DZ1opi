#include <iostream>

#include "Header.h"




int minValueUnderSideDiagonal(int(&matrix)[8][8], int& row, int& col)

{

 int min = 1000;

 for (int i{}; i < 8; i++)

 {

  for (int j{}; j < 8; j++)

  {

   if (i > (7 - j) && min > matrix[i][j])

   {

    min = matrix[i][j];

    row = i;

    col = j;

   }

  }

 }

 return min;

}




int minValueOnSideDiagonal(int(&matrix)[8][8], int& row, int& col)

{

 int min = 1000;

 for (int i{}; i < 8; i++)

 {

  for (int j{}; j < 8; j++)

  {

   if (i == 7 - j && min > matrix[i][j])

   {

    min = matrix[i][j];

    row = i;

    col = j;

   }

  }

 }

 return min;

}
