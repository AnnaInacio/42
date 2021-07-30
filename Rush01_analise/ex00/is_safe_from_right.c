#include <stdlib.h>
#include "t_matrix.h"

int	is_safe_from_right(t_matrix matrix)
{
	int tallest_building;
	int buildings_seen;
	int counter_rows;
	int counter_columns;

	counter_columns = 4;
	counter_rows = 4;
	buildings_seen = 1;
	tallest_building = matrix.values[counter_rows][counter_columns];
	while(counter_rows > 1)
	{
		counter_columns = 4;
		while(counter_columns > 1)
		{
			if(tallest_building
			< matrix.values[counter_rows][counter_columns - 1])
			{
				tallest_building
				= matrix.values[counter_rows][counter_columns - 1];
				buildings_seen++;
			}
			counter_columns--;
		}
		counter_rows--;
		if(buildings_seen != matrix.values[counter_rows][5])
			return (0);
	}
	return (1);
}