/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:10:22 by aoshinth          #+#    #+#             */
/*   Updated: 2024/01/25 09:49:21 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (i);
	while (nb > 1)
	{
		i *= nb;
		nb--;
	}
	return (i);
}
/*
#include <stdio.h>
#include <stdlib.h> // for atoi

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1; // Exit with an error code
    }

    int j = atoi(argv[1]); // Convert the string argument to an integer
    printf("number: %d\nResult: %d\n", j, ft_iterative_factorial(j));

    return 0; // Exit successfully
}
*/
