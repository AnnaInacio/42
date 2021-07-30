#include <unistd.h>
#include "t_matrix.h"

void	write_number(int *number);

void	print_matrix(t_matrix matrix)
{
	int row;
	int column;

	row = 1;
	while(row <= 4)
	{
		column = 1;
		while(column <= 4)
		{
			write_number(&matrix.values[row][column]);
			write(1, " ", 1);
			column++;
		}
		write(1, "\n", 1);
		row++;
	}
}