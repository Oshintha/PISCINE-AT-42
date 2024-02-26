/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:47:29 by aoshinth          #+#    #+#             */
/*   Updated: 2024/01/18 15:54:54 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	if (to_find[0] == '\0')
	{
		return (str);
	}
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <unistd.h>
#include <stdio.h>


int main()
{
    char    str[] = "Hello Hive!";
        char    to_find[] = "Hive!";
        printf("str: %s", str);
    printf("to find: %ld: %s\n" 
	,ft_strstr(str,to_find) - str, ft_strstr(str,to_find));
}
*/
