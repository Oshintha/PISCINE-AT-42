/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:46:44 by aoshinth          #+#    #+#             */
/*   Updated: 2024/01/31 19:15:22 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int				*range;
	unsigned int	i;
	unsigned int	size;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *)malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
/*
#include <stdio.h>
#include <unistd.h>

int main()
{
	int *range;
	int min = 10;
	int max = 20;

	range = ft_range(min, max);
	if (!range) 	
	{
		printf("Memory allocation failed.\n");
		return (1);	
	}

	for (int i = 0; i < (max - min); i++) 
		printf("ft_range[%d]: %d\n", i, range[i]);

	free(range);
	return (0);
}
*/
