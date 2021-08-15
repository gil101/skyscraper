#include "restrictions.h"
#include <stdio.h>
#include <unistd.h>

void	insert_restrictions(char restrictions[31], char column_restrictions[4][4], char row_restrictions[4][4])
{
	int	index;
	int	row;
	int	column;

	index = 0;
	row = 0;
	column = 0;
	while (index < 31)
	{
		if (index <= 8)
		{
			column_restrictions[column][0] = restrictions[index];
			//write(1, &column_restrictions[column][0], 1);
			column_restrictions[column++][1] = restrictions[index + 8];
			//write(1, &column_restrictions[column][1], 1);
		}
		else if (index >= 16)
		{
			row_restrictions[row][0] = restrictions[index];
			//write(1, &row_restrictions[row][0], 1);
			row_restrictions[row++][1] = restrictions[index + 8];
			//write(1, &row_restrictions[row][1], 1);
		}
		index = index + 2;		
	}
}