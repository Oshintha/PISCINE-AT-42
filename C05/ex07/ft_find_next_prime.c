/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:41:40 by aoshinth          #+#    #+#             */
/*   Updated: 2024/01/25 16:17:42 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 0 || nb == 1)
		return (0);
	else if (nb == 2)
		return (1);
	else
	{
		while (i <= nb / i)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	prime;

	prime = nb;
	if (nb <= 2)
		return (2);
	while (!find_prime(prime))
		prime++;
	return (prime);
}

#include <stdio.h>
#include <stdlib.h> // for atoi

int main(int argc, char *argv[])
{
    if (argc != 2)
	{
        printf("Usage: %s <number>\n", argv[0]);
        return 1; // Exit with an error code
    }
	int nb = atoi (argv[1]);
	printf("result:%d\n", ft_find_next_prime(nb));
}

