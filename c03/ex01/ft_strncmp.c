/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maydos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:26:23 by maydos-s          #+#    #+#             */
/*   Updated: 2023/03/21 10:26:29 by maydos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (n > 0 && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			break ;
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int main()
{
    const char  *s1 = "ABDE";
    const char  *s2 = "ABCD";
    size_t  n = strlen(s1) < strlen(s2) ? strlen(s1) : strlen(s2);
    int t;

    t = ft_strncmp(s1, s2, n);
    printf("Result: %d\n", t);
    return 0;
}*/
