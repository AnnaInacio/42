#include <unistd.h>
void	write_number(int *number)
{
	int printable_number;
	
	printable_number = *number + '0';
	write(1, &printable_number, 1);
}