/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maydos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:41:04 by maydos-s          #+#    #+#             */
/*   Updated: 2023/03/20 14:41:08 by maydos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 32) || (str[c] > 126))
			return (0);
		c++;
	}
	return (1);
}
/*
int	main(void)
{
	char	string[] = "Normal characters string";
	char	*p_str;
	p_str = string;

	char	unpr[] = "Unprintables: \t (tab), \a (?)";
	char	*p_unp;
	p_unp = unpr;

	char	empty[] = "";
	char	*p_emp;
	p_emp = empty;

	printf("-----\n1 = Contains only printable characters\n");
	printf("0 = Contains unprintable characters\n\n");
	printf("%s = %d\n", string, ft_str_is_printable(p_str));
	printf("%s = %d\n", unpr, ft_str_is_printable(p_unp));
	printf("Empty = %d\n", ft_str_is_printable(p_emp));

	return (0);
}*/
