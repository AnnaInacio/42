#include "t_matrix.h"
t_matrix	create_matrix(int rows, int columns);
void		print_matrix(t_matrix);

int main()
{
	t_matrix	matrix;

	matrix = create_matrix(6, 6);
	print_matrix(matrix);
}