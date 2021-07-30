#include <stdlib.h>
#include "t_matrix.h"

int	is_safe_from_top(t_matrix matrix)
{
	int tallest_building;
	int buildings_seen;
	int counter_rows;
	int counter_columns;

	counter_columns = 1;
	counter_rows = 1;
	buildings_seen = 1;
	tallest_building = matrix.values[counter_rows][counter_columns];
	while(counter_columns < 4)
	{
		counter_rows = 1;
		while(counter_rows < 4)
		{
			if(tallest_building
			< matrix.values[counter_rows + 1][counter_columns])
			{
				tallest_building
				= matrix.values[counter_rows + 1][counter_columns];
				buildings_seen++;
			}
			counter_rows++;
		}
		counter_columns++;
		if(buildings_seen != matrix.values[0][counter_columns])
			return (0);
	}
	return (1);
}