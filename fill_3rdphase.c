#include "fill_3rdphase.h"
#include <stdlib.h>
#include <unistd.h>


/* Fill the boxes that definetly have that value because of the view*/

void	view_31(char matrix[4][4],  int fixed_index, int row_column)
{
	/* its a row */
	if (row_column == 0)
	{
		matrix[fixed_index][3] = '4';
	}
	/* its a column */
	else if (row_column == 1)
	{
		matrix[3][fixed_index] = '4';
	}
	/* some error in argument passing */
	else
	{
		write(1, "Error", 5);
		exit (1);
	}
}

void	view_13(char matrix[4][4],  int fixed_index, int row_column)
{
	/* its a row */
	if (row_column == 0)
	{
		matrix[fixed_index][0] = '4';
	}
	/* its a column */
	else if (row_column == 1)
	{
		matrix[0][fixed_index] = '4';
	}
	/* some error in argument passing */
	else
	{
		write(1, "Error", 5);
		exit (1);
	}	
}


void	fill_matrixgame_thirdphase(char matrix[4][4], char column_restrictions[4][4], char row_restrictions[4][4])
{
	int	i;
	i = 0;
	while (i < 4)
	{
		if (column_restrictions[i][0] == '3' && column_restrictions[i][0] == '1')
		{
			view_31(matrix, i, 1);	//fill table with view 3-1 for column i
		}
		if (column_restrictions[i][0] == '1' && column_restrictions[i][1] == '3')
		{
			view_13(matrix, i, 1);	//fill table with view 1-3 for column i
		}
		if (row_restrictions[i][0] == '3' && row_restrictions[i][1] == '1')
		{
			view_31(matrix, i, 0);	//fill table with view 3-1 for row i
		}
		if (row_restrictions[i][0] == '1' && row_restrictions[i][1] == '3')
		{
			view_13(matrix, i, 0);	//fill table with view 1-3 for row i
		}
		i++;
	}
}