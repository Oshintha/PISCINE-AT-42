/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:03:45 by aoshinth          #+#    #+#             */
/*   Updated: 2024/01/25 10:45:47 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;

	if (nb >= 0 && nb <= 2147395600)
	{
		root = 1;
		while (root * root <= nb)
		{
			if ((root * root) == nb)
				return (root);
			root++;
		}
	}
	else
	{
		return (0);
	}
	return (0);
}
/*
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
	printf("Result:%d\n", ft_sqrt(nb));
}
*/
