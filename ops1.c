/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:18:48 by fcharbon          #+#    #+#             */
/*   Updated: 2024/03/14 17:15:02 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_data *data, int toprint)
{
	int		temp;

	temp = data->stack_a[0];
	data->stack_a[0] = data->stack_a[1];
	data->stack_a[1] = temp;
	if (toprint != 0)
		ft_printf("sa\n");
}

void	sb(t_data *data, int toprint)
{
	int		temp;

	temp = data->stack_b[0];
	data->stack_b[0] = data->stack_b[1];
	data->stack_b[1] = temp;
	if (toprint != 0)
		ft_printf("sb\n");
}

void	ss(t_data *data)
{
	sa(data, 0);
	sb(data, 0);
	ft_printf("ss\n");
}

void	rrb(t_data *data, int toprint)
{
	int	i;
	int	last;

	i = data->b_len - 1;
	last = data->stack_b[i];
	while (i > 0)
	{
		data->stack_b[i] = data->stack_b[i - 1];
		i--;
	}
	data->stack_b[0] = last;
	if (toprint != 0)
		ft_printf("rrb\n");
}

void	rra(t_data *data, int toprint)
{
	int	i;
	int	last;

	i = data->a_len - 1;
	last = data->stack_a[i];
	while (i > 0)
	{
		data->stack_a[i] = data->stack_a[i - 1];
		i--;
	}
	data->stack_a[0] = last;
	if (toprint != 0)
		ft_printf("rra\n");
}
