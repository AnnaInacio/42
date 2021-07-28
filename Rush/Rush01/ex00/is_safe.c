#include "t_matrix.h"

int is_safe_from_top(t_matrix);
int is_safe_from_bottom(t_matrix);
int is_safe_from_left(t_matrix);
int is_safe_from_right(t_matrix);

int	is_safe(t_matrix matrix)
{
	if (is_safe_from_bottom(matrix) == 1
	&& is_safe_from_left(matrix) == 1
	&& is_safe_from_right(matrix) == 1
	&& is_safe_from_top(matrix) == 1)
		return (1);
	return (0);
}