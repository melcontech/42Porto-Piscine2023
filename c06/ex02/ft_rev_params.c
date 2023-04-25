/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maydos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 14:37:59 by maydos-s          #+#    #+#             */
/*   Updated: 2023/03/26 14:38:02 by maydos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	ca;

	ca = argc - 1;
	if (argc > 1)
	{
		while (ca > 0)
		{
			c = 0;
			while (argv[ca][c] != 0)
			{
				write (1, &argv[ca][c], 1);
				c++;
			}
			write(1, "\n", 1);
			ca--;
		}
	}
	return (0);
}
