/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 19:54:15 by aoshinth          #+#    #+#             */
/*   Updated: 2024/01/14 20:06:08 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(int *x, int *y)
{
	int	i;

	i = *x;
	*x = *y;
	*y = i;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 1;
	while (a < size)
	{
		b = a;
		while (b > 0 && *(tab + b - 1) > *(tab + b))
		{
			swap(tab + b, tab + b - 1);
			b--;
		}
		a++;
	}
}
