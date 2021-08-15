
#include "fill_2ndphase.h"
#include <unistd.h>
#include <stdlib.h>

/* Fill the boxes that definetly have that value because of the view*/

void	view_21(char matrix[4][4],  int fixed_index, int row_column)
{
	/* its a row */
	if (row_column == 0)
	{
		matrix[fixed_index][0] = '3';
		matrix[fixed_index][3] = '4';
	}
	/* its a column */
	else if (row_column == 1)
	{
		matrix[0][fixed_index] = '3';
		matrix[3][fixed_index] = '4';
	}
	/* some error in argument passing */
	else
	{
		write(1, "Error", 5);
		exit (1);
	}
}

void	view_12(char matrix[4][4],  int fixed_index, int row_column)
{
	/* its a row */
	if (row_column == 0)
	{
		matrix[fixed_index][0] = '4';
		matrix[fixed_index][3] = '3';
	}
	/* its a column */
	else if (row_column == 1)
	{
		matrix[0][fixed_index] = '4';
		matrix[3][fixed_index] = '3';
	}
	/* some error in argument passing */
	else
	{
		write(1, "Error", 5);
		exit (1);
	}	
}


void	fill_matrixgame_secondphase(char matrix[4][4], char column_restrictions[4][4], char row_restrictions[4][4])
{
	int	i;
	i = 0;
	while (i < 4)
	{
		if (column_restrictions[i][0] == '2' && column_restrictions[i][1] == '1')
		{
			view_21(matrix, i, 1);	//fill table with view 3-1 for column i
		}
		if (column_restrictions[i][0] == '1' && column_restrictions[i][1] == '2')
		{
			view_12(matrix, i, 1);	//fill table with view 3-1 for column i
		}
		if (row_restrictions[i][0] == '2' && row_restrictions[i][1] == '1')
		{
			view_21(matrix, i, 0);	//fill table with view 3-1 for row i
		}
		if (row_restrictions[i][0] == '1' && row_restrictions[i][1] == '2')
		{
			view_12(matrix, i, 0);	//fill table with view 1-3 for row i
		}
		i++;
	}
}