/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:41:21 by aoshinth          #+#    #+#             */
/*   Updated: 2024/01/18 15:40:16 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (s1[i] == s2[i] && s1[i] && i < n -1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <unistd.h>
#include <stdio.h>

int main()
{
printf("Output: %d",ft_strncmp("hella","hello",5));
        return (0);
}
*/
