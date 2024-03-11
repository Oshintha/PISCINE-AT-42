/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:35:20 by aoshinth          #+#    #+#             */
/*   Updated: 2024/01/31 19:18:06 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*result;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	result = (int *)malloc(sizeof(int) * (max - min));
	if (result == NULL)
		return (-1);
	else
	{
		i = -1;
		while (++i < max - min)
			result[i] = min + i;
		*range = result;
		return (i);
	}
}
/*
#include <stdio.h>

int main() 
{
    int *range;
    int size = ft_ultimate_range(&range, 10, 20);
    
    if (size != -1) 
	{
        printf("Size of range: %d\n", size);
        printf("Range:");
        for (int i = 0; i < size; i++) 
		{
            printf(" %d", range[i]);
        }
        printf("\n");
        free(range); 
    } else {
        printf("Memory allocation failed.\n");
    }
    return 0;
}
*/
