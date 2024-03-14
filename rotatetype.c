/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotatetype.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 21:06:38 by fcharbon          #+#    #+#             */
/*   Updated: 2024/03/14 19:23:17 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate_type_ba(t_data *data)
{
	int	i;
	int	count;
	int	tmp;

	tmp = data->b_len;
	count = 0;
	i = case_rrarrb_a(data, data->stack_b[0]);
	while (count < tmp)
	{
		if (i > case_rarb_a(data, data->stack_b[count]))
			i = case_rarb_a(data, data->stack_b[count]);
		if (i > case_rrarrb_a(data, data->stack_b[count]))
			i = case_rrarrb_a(data, data->stack_b[count]);
		if (i > case_rarrb_a(data, data->stack_b[count]))
			i = case_rarrb_a(data, data->stack_b[count]);
		if (i > case_rrarb_a(data, data->stack_b[count]))
			i = case_rrarb_a(data, data->stack_b[count]);
		count++;
	}
	return (i);
}

int	rotate_type_ab(t_data *data)
{
	int	i;
	int	count;
	int	tmp;

	tmp = data->a_len;
	count = 0;
	i = case_rrarrb_b(data, data->stack_a[0]);
	while (count < tmp)
	{
		if (i > case_rarb_b(data, data->stack_a[count]))
			i = case_rarb_b(data, data->stack_a[count]);
		if (i > case_rrarrb_b(data, data->stack_a[count]))
			i = case_rrarrb_b(data, data->stack_a[count]);
		if (i > case_rarrb_b(data, data->stack_a[count]))
			i = case_rarrb_b(data, data->stack_a[count]);
		if (i > case_rrarb_b(data, data->stack_a[count]))
			i = case_rrarb_b(data, data->stack_a[count]);
		count++;
	}
	return (i);
}
