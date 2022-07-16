/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoulen <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 02:53:57 by skoulen           #+#    #+#             */
/*   Updated: 2022/07/15 05:00:21 by skoulen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int tab[4] = {1, 2, 3, 7};
	ft_rev_int_tab(tab, 4);
	int i = 0;
	while(i < 4)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}
