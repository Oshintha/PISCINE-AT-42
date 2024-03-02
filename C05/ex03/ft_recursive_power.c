/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:10:00 by aoshinth          #+#    #+#             */
/*   Updated: 2024/01/25 10:35:21 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 1)
		return (result * ft_recursive_power(result, power - 1));
	else
		return (result);
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
	int    nb = atoi (argv[1]);
    int power = atoi (argv[2]);
	printf("nb:%d\npower:%d\nResult:%d\n", 
	nb, power,ft_recursive_power(nb,power));
	return 0;
}
*/
