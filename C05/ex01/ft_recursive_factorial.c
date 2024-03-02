/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:25:03 by aoshinth          #+#    #+#             */
/*   Updated: 2024/01/25 10:20:28 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
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
	int a = atoi (argv[1]);
	printf("Nubmer:%d\nResult:%d\n", a, ft_recursive_factorial(a));
}
*/
