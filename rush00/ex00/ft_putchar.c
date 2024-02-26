#include <unistd.h>
1
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
