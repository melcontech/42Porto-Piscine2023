/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maydos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:09:40 by maydos-s          #+#    #+#             */
/*   Updated: 2023/03/19 16:09:44 by maydos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'A') || (str[c] > 'Z' && str[c] < 'a') || (str[c] > 'z'))
			return (0);
		c++;
	}
	return (1);
}
/*
int	main(void)
{
	char	alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char	*p_alp;
	p_alp = alpha;

	char	special[] = "ABC abc áéíóú àèìòù âêîôû äëïöü \'\"(){}[]!?@#$&* wxyz WXYZ";
	char	*p_spe;
	p_spe = special;

	char	empty[] = "";
	char	*p_emp;
	p_emp = empty;

	printf("1 = A string contem apenas caracteres alfabeticos\n");
	printf("0 = String nao contem apenas caracteres alfabeticos\n");
	printf("%s = %d\n", alpha, ft_str_is_alpha(p_alp));
	printf("%s = %d\n", special, ft_str_is_alpha(p_spe));
	printf("Empty = %d\n-----\n", ft_str_is_alpha(p_emp));

	return (0);
}*/
