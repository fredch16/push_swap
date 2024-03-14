/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateandpush.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 20:40:58 by fcharbon          #+#    #+#             */
/*   Updated: 2024/03/14 19:23:00 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	apply_rarb(t_data *data, int c, char s)
{
	if (s == 'a')
	{
		while (data->stack_a[0] != c && find_place_b(data, c) > 0)
			rr(data);
		while (data->stack_a[0] != c)
			ra(data, 1);
		while (find_place_b(data, c) > 0)
			rb(data, 1);
		pb(data);
	}
	else
	{
		while (data->stack_b[0] != c && find_place_a(data, c) > 0)
			rr(data);
		while (data->stack_b[0] != c)
			rb(data, 1);
		while (find_place_a(data, c) > 0)
			ra(data, 1);
		pa(data);
	}
	return (-1);
}

int	apply_rrarrb(t_data *data, int c, char s)
{
	if (s == 'a')
	{
		while (data->stack_a[0] != c && find_place_b(data, c) > 0)
			rrr(data);
		while (data->stack_a[0] != c)
			rra(data, 1);
		while (find_place_b(data, c) > 0)
			rrb(data, 1);
		pb(data);
	}
	else
	{
		while (data->stack_b[0] != c && find_place_a(data, c) > 0)
			rrr(data);
		while (data->stack_b[0] != c)
			rrb(data, 1);
		while (find_place_a(data, c) > 0)
			rra(data, 1);
		pa(data);
	}
	return (-1);
}

int	apply_rrarb(t_data *data, int c, char s)
{
	if (s == 'a')
	{
		while (data->stack_a[0] != c)
			rra(data, 1);
		while (find_place_b(data, c) > 0)
			rb(data, 1);
		pb(data);
	}
	else
	{
		while (find_place_a(data, c) > 0)
			rra(data, 1);
		while (data->stack_b[0] != c)
			rb(data, 1);
		pa(data);
	}
	return (-1);
}

int	apply_rarrb(t_data *data, int c, char s)
{
	if (s == 'a')
	{
		while (data->stack_a[0] != c)
			ra(data, 1);
		while (find_place_b(data, c) > 0)
			rrb(data, 1);
		pb(data);
	}
	else
	{
		while (find_place_a(data, c) > 0)
			ra(data, 1);
		while (data->stack_b[0] != c)
			rrb(data, 1);
		pa(data);
	}
	return (-1);
}
