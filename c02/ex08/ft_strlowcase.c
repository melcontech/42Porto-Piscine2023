/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maydos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:44:12 by maydos-s          #+#    #+#             */
/*   Updated: 2023/03/20 14:44:17 by maydos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 'A') && (str[c] <= 'Z'))
			str[c] += 'a' - 'A';
		c++;
	}
	return (str);
}
/*
int	main(void)
{
	char	uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	*upr;
	upr = uppercase;
	
	char	allcases[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	*p_all;
	p_all = allcases;

	char	empty[] = "";
	char	*p_emp;
	p_emp = empty;

	printf("\n-----\n%s = ", uppercase);
	printf("%s\n", ft_strlowcase(upr));
	printf("%s = ", allcases);
	printf("%s\n", ft_strlowcase(p_all));
	printf("Empty = %s\n-----\n", ft_strlowcase(p_emp));

}*/
