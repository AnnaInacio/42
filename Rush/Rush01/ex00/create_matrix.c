#include <stdlib.h>
#include "t_matrix.h"

t_matrix	create_matrix(int rows, int columns)
{
	t_matrix	matrix;
	int			counter_i;
	int			counter_j;

	counter_i = 0;
	matrix.rows = rows;
	matrix.columns = columns;
	matrix.values = (int **) malloc(rows * sizeof(int*));
	while(counter_i < rows)
	{
		matrix.values[counter_i] = (int *) malloc(columns * sizeof(int *));
		counter_j = 0;
		while(counter_j < columns)
		{
			matrix.values[counter_i][counter_j] = 0;
			counter_j++;
		}
		counter_i++;
	}
	return (matrix);
}