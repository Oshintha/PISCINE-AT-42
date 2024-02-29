/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:24:27 by aoshinth          #+#    #+#             */
/*   Updated: 2024/01/21 16:44:32 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "hello Hive!";
		printf("str:%s\n",str);
		printf("# of characters test:%d\n", ft_strlen(str));
		printf("# of characters original:%lu\n", strlen(str));
}
*/
