#include "print_matrix.h"
#include <stdio.h>

void	print_gamematrix(char matrix[4][4])
{
	int row;
	int column;

	row = 0;
	while (row < 4)
	{
		column = 0;
		while (column < 4)
		{
			//para testar a printmatrix caso esteja vazia
			if (matrix[row][column] > 52 || matrix[row][column] < 49)
			{
				matrix[row][column] = '0';
			}
			printf(" %c ", matrix[row][column]);
			column++;
		}
		row++;
		printf("\n");
	}
}