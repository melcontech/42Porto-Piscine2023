/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maydos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:34:12 by maydos-s          #+#    #+#             */
/*   Updated: 2023/03/21 10:34:22 by maydos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	while (dest[i])
	{
	i++;
	}
	j = 0;
	while (src[j] && j < nb)
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int    main(void)
{
    char dest[11] = "Hello ";
    char *src = "world!";
    unsigned int nb = 5;

    printf("Before ft_strncat: %s\n", dest);
    ft_strncat(dest, src, nb);
    printf("After ft_strncat: %s\n", dest);
}*/
