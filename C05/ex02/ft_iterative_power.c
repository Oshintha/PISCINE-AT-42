/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:36:04 by aoshinth          #+#    #+#             */
/*   Updated: 2024/01/25 10:32:34 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 0)
	{
		i *= nb;
		power--;
	}
	return (i);
}
/*
#include <stdio.h>
#include <stdlib.h> // for atoi

int main(int argc, char *argv[])
{
	if (argc != 3) 
	{
        printf("Usage: %s <number>\n", argv[0]);
        return 1; // Exit with an error code
    }
	int	nb = atoi (argv[1]);
	int power = atoi (argv[2]);
	printf("nb:%d\npower:%d\nResult:%d\n", 
	nb, power,ft_iterative_power(nb,power));
	return 0;
}
*/
