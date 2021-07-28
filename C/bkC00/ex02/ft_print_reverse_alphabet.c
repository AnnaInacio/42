#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alfabeto;

	alfabeto = 'z';
	while (alfabeto >= 'a')
	{
		write(1, &alfabeto, 1);
		alfabeto--;
	}
}
