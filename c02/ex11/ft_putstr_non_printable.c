/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maydos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:49:48 by maydos-s          #+#    #+#             */
/*   Updated: 2023/03/20 14:49:51 by maydos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_p(char a)
{
	write(1, &a, 1);
}

bool	printable(char a)
{
	return (a >= ' ' && a <= '~');
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	a;

	i = 0;
	while (str[i] != '\0')
	{
		if (printable(str[i]))
			ft_p(str[i]);
		else
		{
			ft_p('\\');
			if (str[i] < 0)
				a = 256 + str[i];
			else
				a = str[i];
			ft_p("0123456789abcdef"[a / 16]);
			ft_p("0123456789abcdef"[a % 16]);
		}
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = {'0', '1', 2, 30, 16, '4', 'a', 19, 'C'};

	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	return (0);
}*/
