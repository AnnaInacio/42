#include <stdlib.h>
#include "t_matrix.h"

int	find_empty_cell(t_matrix matrix)
{
	int counter_row;
	int counter_column;

	counter_row = 1;
	counter_column = 1;
	while (counter_row <= 4)
	{
		while (counter_column <= 4)
		{
			if (matrix.values[counter_row][counter_column] == 0)
				return (1);
		}
	}
	return (0);
}