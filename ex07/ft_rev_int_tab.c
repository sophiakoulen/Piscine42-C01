/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoulen <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 04:49:46 by skoulen           #+#    #+#             */
/*   Updated: 2022/07/15 05:03:29 by skoulen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		tab[i] ^= tab[size - i - 1];
		tab[size - i - 1] ^= tab[i];
		tab[i] ^= tab[size - i - 1];
		i++;
	}
}
