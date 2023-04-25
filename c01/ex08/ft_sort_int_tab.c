/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maydos-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:34:31 by maydos-s          #+#    #+#             */
/*   Updated: 2023/03/15 11:34:37 by maydos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	c;
	int	swap;

	c = -1;
	while (++c < (size - 1))
	{
		if (tab[c] > tab[c + 1])
		{
			swap = tab[c];
			tab[c] = tab[c + 1];
			tab[c + 1] = swap;
			c = -1;
		}
	}
}

/*
int main(void)
{
    int tab[] = {5, 3, 4, 2, 6, 1};
    int i = 0;
    
        printf("Antes  :");
    while (i < 6)
        printf("[ %d ]", tab[i++]);
    i = 0;
    ft_sort_int_tab(tab, 6);
    printf("\nDepois :");
    while (i < 6)
        printf("[ %d ]", tab[i++]);
}
*/
