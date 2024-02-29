/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:16:53 by aoshinth          #+#    #+#             */
/*   Updated: 2024/01/22 19:22:16 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	j = 0;
	while (base[j])
	{
		i = j + 1;
		while (base [i - 1])
		{
			if (base[j] == base[i])
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}

void	print_base_nb(int nbr, char *base, unsigned int size)
{
	unsigned int	n;
	unsigned char	a;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= size)
		print_base_nb(n / size, base, size);
	a = base[n % size];
	write(1, &a, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	s;

	s = 0;
	if (check_base(base) == 1)
	{
		while (base[s])
			s++;
		print_base_nb(nbr, base, s);
	}
}

#include <stdio.h>

int main()
{
	char	str1[] = "0123456789ABCDEF";
	char	str2[] = "01";
	char	str3[] = "0123456789ABCDE0";
    char	str4[] = "poneyvif";
		
    // Example: print the decimal number 42 in hexadecimal
    int number = 42;
    
    // Call ft_putnbr_base to print the number in the specified base
    ft_putnbr_base(number, str1);
    ft_putchar('\n');
    ft_putnbr_base(number, str2);
     ft_putchar('\n');
	ft_putnbr_base(number, str3);
     ft_putchar('\n');
	ft_putnbr_base(number, str4);

    // Add a newline for better formatting
    ft_putchar('\n');
    return 0;
}

