/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maydos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:49:59 by maydos-s          #+#    #+#             */
/*   Updated: 2023/03/13 18:50:01 by maydos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int		main (void)
{
	int *********p_nbr;
	int ********p_nbr2;
	int *******p_nbr3;
	int ******p_nbr4;
	int *****p_nbr5;
	int ****p_nbr6;
	int ***p_nbr7;
	int **p_nbr8;
	int *p_nbr9;
	int nbr;

	nbr = 13;
	p_nbr9 = &nbr;
	p_nbr8 = &p_nbr9;
	p_nbr7 = &p_nbr8;
	p_nbr6 = &p_nbr7;
	p_nbr5 = &p_nbr6;
	p_nbr4 = &p_nbr5;
	p_nbr3 = &p_nbr4;
	p_nbr2 = &p_nbr3;
	p_nbr = &p_nbr2;

	ft_ultimate_ft(p_nbr);
	printf("%d\n", nbr);
	return (0);
}
