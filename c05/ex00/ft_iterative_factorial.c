/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maydos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 21:10:30 by maydos-s          #+#    #+#             */
/*   Updated: 2023/03/26 21:10:34 by maydos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h> 

int	ft_iterative_factorial(int nb)
{
	int	resultado;

	resultado = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
	{
		resultado *= nb;
		nb--;
	}
	return (resultado);
}
/*
int		main(void)
{
	printf("%d\n", ft_iterative_factorial(3));
}*/
