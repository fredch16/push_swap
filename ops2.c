/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 22:33:16 by fcharbon          #+#    #+#             */
/*   Updated: 2024/03/14 22:25:40 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_data *data)
{
	rra(data, 0);
	rrb(data, 0);
	ft_printf("rrr\n");
}

void	rb(t_data *data, int toprint)
{
	int	i;
	int	first;

	i = 0;
	first = data->stack_b[0];
	while (i < data->b_len -1)
	{
		data->stack_b[i] = data->stack_b[i + 1];
		i++;
	}
	data->stack_b[i] = first;
	if (toprint != 0)
		ft_printf("rb\n");
}

void	ra(t_data *data, int toprint)
{
	int	i;
	int	first;

	i = 0;
	first = data->stack_a[0];
	while (i < data->a_len - 1)
	{
		data->stack_a[i] = data->stack_a[i + 1];
		i++;
	}
	data->stack_a[i] = first;
	if (toprint != 0)
		ft_printf("ra\n");
}

void	rr(t_data *data)
{
	ra(data, 0);
	rb(data, 0);
	ft_printf("rr\n");
}

void	pa(t_data *data)
{
	int	i;

	data->a_len++;
	i = data->a_len;
	while (i > 0)
	{
		data->stack_a[i] = data->stack_a[i - 1];
		i--;
	}
	data->stack_a[0] = data->stack_b[0];
	i = 0;
	while (i < data->b_len - 1)
	{
		data->stack_b[i] = data->stack_b[i + 1];
		i++;
	}
	data->b_len--;
	ft_printf("pa\n");
}
