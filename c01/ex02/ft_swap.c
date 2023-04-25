/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maydos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:18:55 by maydos-s          #+#    #+#             */
/*   Updated: 2023/03/14 11:18:59 by maydos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*
int		main(void)
{
	int i  = 7;
	int j  = 3;

	int *a = &i;
	int *b = &j;

	ft_swap(a, b);
	printf("a was 7 and now is: %u\n", *a);
	printf("b was 3 and now is: %u\n", *b);
    return(0);
}
*/
