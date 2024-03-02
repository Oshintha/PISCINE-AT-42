/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:44:55 by aoshinth          #+#    #+#             */
/*   Updated: 2024/01/25 10:38:57 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
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
	printf("Result: %d\n",ft_fibonacci(nb));
}
*/
