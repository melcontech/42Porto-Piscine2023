/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maydos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:39:49 by maydos-s          #+#    #+#             */
/*   Updated: 2023/03/20 14:39:54 by maydos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'A') || (str[c] > 'Z'))
			return (0);
		c++;
	}
	return (1);
}
/*
int		main(void)
{
	char	uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	*p_upr;
	p_upr = uppercase;

	char	special[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_";
	char	*p_spe;
	p_spe = special;

	char	empty[] = "";
	char	*p_emp;
	p_emp = empty;

	printf("1 = String contem apenas char maiusculos\n");
	printf("0 = String nao contem apenas char maiusculos\n");
	printf("%s = %d\n", uppercase, ft_str_is_uppercase(p_upr));
	printf("%s = %d\n", special, ft_str_is_uppercase(p_spe));
	printf("Empty = %d\n", ft_str_is_uppercase(p_emp));

	return (0);
}*/
