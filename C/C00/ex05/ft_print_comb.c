#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	hundred;
	int	ten;
	int	unit;

	hundred = 0;
	while (hundred <= 7)
	{
		ten = hundred + 1;
		while (ten <= 8)
		{
			unit = ten + 1;
			while (unit <= 9)
			{
				ft_putchar(hundred + '0');
				ft_putchar(ten + '0');
				ft_putchar(unit + '0');
				if (hundred < 7)
					write(1, ", ", 2);
				unit ++;
			}
			ten++;
		}
		hundred++;
	}
}
