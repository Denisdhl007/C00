#include <unistd.h>

void	ft_print_comb2(void)
{
	int i;
	int j;
	char c;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			c = '0' + (i / 10);
			write(1, &c, 1);
			c = '0' + (i % 10);
			write(1, &c, 1);
			
			write(1, " ", 1);

			c = '0' + (j / 10);
			write(1, &c, 1);
			c = '0' + (j % 10);
			write(1, &c, 1);

			if (!(i == 98 && j == 99))
				write(1, ", ", 2);
			
			j++;
		}
		i++;
	}
}