#include "fill_1stphase.h"
#include <unistd.h>
#include <stdio.h>

void	view_14(char matrix[4][4], int fixed_index, int row_column)
{
	int i;

	i = 0;
	/* its a row */
	if (row_column == 0)
	{
		while (i < 4)
		{
			matrix[fixed_index][i] = 52 - i;
			i++;
		}
	}
	/* its a column */
	else if (row_column == 1)
	{
		while (i < 4)
		{
			matrix[i][fixed_index] = 52 - i;
			i++;
		}
	}
	/* some error in argument passing */
	else
	{
		write(1, "Error", 5);
	}
}

void	view_41(char matrix[4][4],  int fixed_index, int row_column)
{
	int i;

	i = 0;
	/* its a row */
	if (row_column == 0)
	{
		while (i < 4)
		{
			matrix[fixed_index][i] = 49 + i;
			i++;
		}
	}
	/* its a column */
	else if (row_column == 1)
	{
		while (i < 4)
		{
			matrix[i][fixed_index] = 49 + i;
			i++;
		}
	}
	/* some error in argument passing */
	else
	{
		write(1, "Error", 5);
	}
}


void	fill_matrixgame_firstphase(char matrix[4][4], char column_restrictions[4][4], char row_restrictions[4][4])
{
	int	i;
	i = 0;
	while (i < 4)
	{
		if (column_restrictions[i][0] == '4')
		{
			view_41(matrix, i, 1);	//fill table with view 4-1 for column i
		}
		if (column_restrictions[i][1] == '4')
		{
			view_14(matrix, i, 1);	//fill table with view 1-4 for column i
		}
		if (row_restrictions[i][0] == '4')
		{
			printf("View 41 row at %d\n", i);
			view_41(matrix, i, 0);	//fill table with view 4-1 for row i
		}
		if (row_restrictions[i][1] == '4')
		{
			printf("View 14 row at %d\n", i);
			view_14(matrix, i, 0);	//fill table with view 1-4 for row i
		}
		i++;
	}
}