/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                         :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: maydos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 13:09:21 by maydos-s          #+#    #+#             */
/*   Updated: 2023/03/18 13:09:25 by maydos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	source[20] = "Hello Mundo";
	char	destin[20] = "Ola Mundo";
	char	*dest;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", source, destin);
	dest = ft_strcpy(destin, source);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", source, dest);
	return (0);
}*/
