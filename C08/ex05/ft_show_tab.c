/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:07:24 by aoshinth          #+#    #+#             */
/*   Updated: 2024/02/01 10:26:24 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnum(int nb)
{
	long	i;

	i = nb;
	if (i < 0)
	{
		ft_putchar('-');
		i *= -1;
	}
	if (i > 9)
	{
		ft_putnum(i / 10);
		ft_putnum(i % 10);
	}
	else
		ft_putchar(i + 48);
}

void	ft_show_tab(struct s_stock_str *par)
{
	unsigned int	i;

	i = -1;
	while (par[++i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnum(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
	}
}
