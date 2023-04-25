/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maydos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:08:31 by maydos-s          #+#    #+#             */
/*   Updated: 2023/03/14 17:09:33 by maydos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
		return ;
	*div = a / b;
	*mod = a % b;
}

/*
int main(void)
{
	int a  = 5;
	int b  = 2;

	int *div = &a;
	int *modulo = &b;

	ft_div_mod(a, b, div, modulo);
	
	printf("Div: %d\n",*div);
	printf("Mod: %d\n",*modulo);
}
*/
