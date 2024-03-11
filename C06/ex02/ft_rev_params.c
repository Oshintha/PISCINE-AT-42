/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:14:35 by aoshinth          #+#    #+#             */
/*   Updated: 2024/01/29 11:38:16 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc -1;
	if (argc > 1)
	{
		while (i >= 1)
		{
			j = 0;
			while (argv[i][j])
			{
				j++;
			}
			write (1, argv[i], j);
			write (1, "\n", 1);
			i--;
		}
	}
	else
		return (0);
}
