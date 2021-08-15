#ifndef SECONDPHASE_H_
#define SECONDPHASE_H_

// functions declaration

void	view_12(char matrix[4][4], int fixed_index, int row_column);

void	view_21(char matrix[4][4],  int fixed_index, int row_column);

void	fill_matrixgame_secondphase(char matrix[4][4], char column_restrictions[4][4], char row_restrictions[4][4]);

#endif