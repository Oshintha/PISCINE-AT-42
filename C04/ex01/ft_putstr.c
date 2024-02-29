/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:37:40 by aoshinth          #+#    #+#             */
/*   Updated: 2024/01/21 17:41:08 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "Hello Hive!";
		printf("putstr:%s\n", (str1));
		void	ft_putstr(char *str);
		printf("ft_putstr:%s\n", (str1));
		return(0);
}

