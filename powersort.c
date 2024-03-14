/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   powersort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 23:06:27 by fcharbon          #+#    #+#             */
/*   Updated: 2024/03/14 19:22:23 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_minstk(int *array, int len)
{
	long	min;
	int		i;

	min = LONG_MAX;
	i = 0;
	while (i < len)
	{
		if (array[i] < min)
			min = array[i];
		i++;
	}
	return (min);
}

void	sort_b_till_3(t_data *data)
{
	int	i;
	int	tmp;
	int	count;

	while (data->a_len > 3 && !stack_sorted(data))
	{
		count = 0;
		tmp = data->stack_a[count];
		i = rotate_type_ab(data);
		while (i >= 0 && count < data->a_len)
		{
			if (i == case_rarb_b(data, tmp))
				i = apply_rarb(data, tmp, 'a');
			else if (i == case_rrarrb_b(data, tmp))
				i = apply_rrarrb(data, tmp, 'a');
			else if (i == case_rarrb_b(data, tmp))
				i = apply_rarrb(data, tmp, 'a');
			else if (i == case_rrarb_b(data, tmp))
				i = apply_rrarb(data, tmp, 'a');
			else
				tmp = data->stack_a[++count];
		}
	}
}

void	sort_b(t_data *data)
{
	if (data->a_len > 3 && !stack_sorted(data))
		pb(data);
	if (data->a_len > 3 && !stack_sorted(data))
		pb(data);
	if (data->a_len > 3 && !stack_sorted(data))
		sort_b_till_3(data);
	if (!stack_sorted(data))
		sort_three(data);
}

void	sort_a(t_data *data)
{
	int	i;
	int	tmp;
	int	count;

	count = 0;
	while (data->b_len > 0)
	{
		tmp = data->stack_b[count];
		i = rotate_type_ba(data);
		while (i >= 0)
		{
			if (i == case_rarb_a(data, tmp))
				i = apply_rarb(data, tmp, 'b');
			else if (i == case_rrarrb_a(data, tmp))
				i = apply_rrarrb(data, tmp, 'b');
			else if (i == case_rarrb_a(data, tmp))
				i = apply_rarrb(data, tmp, 'b');
			else if (i == case_rrarb_a(data, tmp))
				i = apply_rrarb(data, tmp, 'b');
			else
				tmp = data->stack_b[count++];
		}
	}
}

void	powersort(t_data *data)
{
	int	i;

	sort_b(data);
	sort_a(data);
	i = find_index_a(data, find_minstk(data->stack_a, data->a_len));
	if (i < data->a_len - i)
	{
		while (data->stack_a[0] != find_minstk(data->stack_a, data->a_len))
			ra(data, 1);
	}
	else
	{
		while (data->stack_a[0] != find_minstk(data->stack_a, data->a_len))
			rra(data, 1);
	}
}
