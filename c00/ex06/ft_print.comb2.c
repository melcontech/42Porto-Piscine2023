/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maydos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 12:28:46 by maydos-s          #+#    #+#             */
/*   Updated: 2023/03/12 12:29:03 by maydos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = -1;
	while (i++ <= 98)
	{
		j = i;
		while (j++ < 99)
		{
			ft_putchar('0' + (i / 10));
			ft_putchar('0' + (i % 10));
			ft_putchar(' ');
			ft_putchar('0' + (j / 10));
			ft_putchar('0' + (j % 10));
			if (i != 98)
				write(1, ", ", 2);
		}
	}
}

int main ()
{
	ft_print_comb2();
}
