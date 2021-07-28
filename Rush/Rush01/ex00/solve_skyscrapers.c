#include "t_matrix.h"
int	find_empty_cell(t_matrix matrix);
int is_safe(t_matrix matrix);

int solve_skyscrapers(t_matrix matrix)
{
	int counter;

	counter = 1;
	if(find_empty_cell(matrix) != 1)
		return (1);
	while(counter <= 4)
	{
		if(is_safe(matrix))
		{
		}
	}
	return (0);
}