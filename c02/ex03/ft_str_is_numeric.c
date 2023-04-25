/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maydos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:10:52 by maydos-s          #+#    #+#             */
/*   Updated: 2023/03/19 16:10:56 by maydos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < '0') || (str[c] > '9'))
			return (0);
		c++;
	}
	return (1);
}
/*
int		main(void)
{
	char numeric[] = "0123456789";
	char *p_num;
	p_num = numeric;

	char special[] = "0123456789_";
	char *p_spe;
	p_spe = special;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("1 = String contem apenas char numericos\n");
	printf("0 = String nao contem apenas char numericos\n");
	printf("%s = %d\n", numeric, ft_str_is_numeric(p_num));
	printf("%s = %d\n", special, ft_str_is_numeric(p_spe));
	printf("Empty = %d\n", ft_str_is_numeric(p_emp));

	return (0);
}*/
