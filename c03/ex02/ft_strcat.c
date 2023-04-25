/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maydos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:32:56 by maydos-s          #+#    #+#             */
/*   Updated: 2023/03/21 10:33:04 by maydos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = 0;
	while (dest[i1] != '\0')
		i1++;
	while (src[i2] != '\0')
	{
		dest[i1] = src[i2];
		i1++;
		i2++;
	}
	dest[i1] = '\0';
	return (dest);
}
/*
int		main(void)
{
	char	dest[50] = "bonjour";
	char	*src;

	src = " les amis";
	printf(".%s.\n", ft_strcat(dest, src));
	printf(".%s.\n", strcat(dest, src));
}*/
