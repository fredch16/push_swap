/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:09:33 by fcharbon          #+#    #+#             */
/*   Updated: 2024/03/14 19:14:07 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_data *data)
{
	int	fatty;

	fatty = find_maxstk(data->stack_a, data->a_len);
	if (data->stack_a[0] == fatty)
		ra(data, 1);
	else if (data->stack_a[1] == fatty)
		rra(data, 1);
	if (data->stack_a[0] > data->stack_a[1])
		sa(data, 1);
}

int	find_index_a(t_data *data, int nbr)
{
	int	i;

	i = 0;
	while (data->stack_a[i] != nbr)
		i++;
	return (i);
}

int	find_index_b(t_data *data, int nbr)
{
	int	i;

	i = 0;
	while (data->stack_b[i] != nbr)
		i++;
	return (i);
}

int	find_place_a(t_data *data, int nbr)
{
	int	i;
	int	tmp;

	i = 1;
	if (nbr < data->stack_a[0] && nbr > data->stack_a[data->a_len - 1])
		i = 0;
	else if (nbr > find_maxstk(data->stack_a, data->a_len)
		|| nbr < find_minstk(data->stack_a, data->a_len))
		i = find_index_a(data, find_minstk(data->stack_a, data->a_len));
	else
	{
		tmp = data->stack_a[i];
		while ((data->stack_a[i - 1] > nbr || tmp < nbr)
			&& (data->a_len >= i + 1))
		{
			tmp = data->stack_a[i + 1];
			i++;
		}
	}
	return (i);
}

int	find_place_b(t_data *data, int nbr)
{
	int	i;
	int	tmp;

	i = 1;
	if (nbr > data->stack_b[0] && nbr < data->stack_b[data->b_len - 1])
		i = 0;
	else if (nbr > find_maxstk(data->stack_b, data->b_len)
		|| nbr < find_minstk(data->stack_b, data->b_len))
		i = find_index_b(data, find_maxstk(data->stack_b, data->b_len));
	else
	{
		tmp = data->stack_b[i];
		while ((data->stack_b[i - 1] < nbr || tmp > nbr)
			&& (data->b_len >= i + 1))
		{
			tmp = data->stack_b[i + 1];
			i++;
		}
	}
	return (i);
}
