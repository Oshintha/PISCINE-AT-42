#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_middle_line(int width)
{
	int	i;

	i = 0;
	while (i < width)
	{
		if (i == 0 || i == width - 1)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
	ft_putchar('\n');
}

void	ft_print_first_line(int width)
{
	int	i;

	i = 0;
	while (i < width)
	{
		if (i == 0)
		{
			ft_putchar('A');
		}
		else if (i == width - 1)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	counter_y;

	counter_y = 0;
	if (x <= 0 || y <= 0)
	{
		write(1, "Failed to print pattern\nGive only positive integers\n", 52);
		return ;
	}
	while (counter_y < y)
	{
		if (counter_y == 0 || counter_y == y - 1)
		{
			ft_print_first_line(x);
		}
		else
		{
			ft_print_middle_line(x);
		}
		counter_y++;
	}
}
