/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:19:31 by fcharbon          #+#    #+#             */
/*   Updated: 2024/03/14 22:25:53 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_data *data)
{
	int	i;

	data->b_len++;
	i = data->b_len;
	while (i > 0)
	{
		data->stack_b[i] = data->stack_b[i - 1];
		i--;
	}
	data->stack_b[0] = data->stack_a[0];
	i = 0;
	while (i < data->a_len - 1)
	{
		data->stack_a[i] = data->stack_a[i + 1];
		i++;
	}
	data->a_len--;
	ft_printf("pb\n");
}
