#include "print_matrix.h"
#include "restrictions.h"
#include "fill_1stphase.h"
#include "fill_2ndphase.h"
#include "fill_3rdphase.h"
#include <stdio.h>

void	print_gamematrix(char matrix[4][4]);
void	insert_restrictions(char restrictions[31], char column_restrictions[4][4], char row_restrictions[4][4]);
void	fill_matrixgame_firstphase(char matrix[4][4], char column_restrictions[4][4], char row_restrictions[4][4]);
void	fill_matrixgame_secondphase(char matrix[4][4], char column_restrictions[4][4], char row_restrictions[4][4]);
void	fill_matrixgame_thirdphase(char matrix[4][4], char column_restrictions[4][4], char row_restrictions[4][4]);

char g_matrix[4][4] = {};
char g_column_restrictions[4][4] = {};
char g_row_restrictions[4][4] = {};

int	main(int argc, char *argv[])
{
	printf("argc = %d\n", argc);
	//printf("argv = %s", argv[1]);
	insert_restrictions(argv[1], g_column_restrictions, g_row_restrictions);
	fill_matrixgame_firstphase(g_matrix, g_column_restrictions, g_row_restrictions);
	print_gamematrix(g_matrix);
	printf("\n");
	fill_matrixgame_secondphase(g_matrix, g_column_restrictions, g_row_restrictions);
	print_gamematrix(g_matrix);
	printf("\n");
	fill_matrixgame_thirdphase(g_matrix, g_column_restrictions, g_row_restrictions);
	print_gamematrix(g_matrix);
	//fill_1stphase
	//fill_2ndphase
	//fill_3rdphase
	//fill_4thphase
}