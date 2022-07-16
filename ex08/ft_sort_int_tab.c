/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoulen <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 23:25:23 by skoulen           #+#    #+#             */
/*   Updated: 2022/07/16 23:55:25 by skoulen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	lomuto_partition(int *arr, int start_index, int end_index)
{
	int	pivot;
	int	i;
	int	j;

	pivot = arr[end_index];
	i = start_index;
	j = start_index;
	while (j < end_index)
	{
		if (arr[j] <= pivot)
		{
			swap(&arr[i], &arr[j]);
			i++;
		}
		j++;
	}
	swap(&arr[i], &arr[end_index]);
	return (i);
}

void	quicksort(int *arr, int start_index, int end_index)
{
	int	pivot_index;

	if (start_index >= end_index)
	{
		return ();
	}
	pivot_index = lomuto_partition(arr, start_index, end_index);
	quicksort(arr, start_index, pivot_index - 1);
	quicksort(arr, pivot_index + 1, end_index);
}
