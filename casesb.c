/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   casesb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 20:06:34 by fcharbon          #+#    #+#             */
/*   Updated: 2024/03/14 19:15:13 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	case_rarb_b(t_data *data, int c)
{
	int	i;

	i = find_place_b(data, c);
	if (i < find_index_a(data, c))
		i = find_index_a(data, c);
	return (i);
}

int	case_rrarrb_b(t_data *data, int c)
{
	int	i;

	i = 0;
	if (find_place_b(data, c))
		i = data->b_len - find_place_b(data, c);
	if ((i < (data->a_len - find_index_a(data, c))) && find_index_a(data, c))
		i = data->a_len - find_index_a(data, c);
	return (i);
}

int	case_rarrb_b(t_data *data, int c)
{
	int	i;

	i = 0;
	if (find_place_b(data, c))
		i = data->b_len - find_place_b(data, c);
	i = find_index_a(data, c) + i;
	return (i);
}

int	case_rrarb_b(t_data *data, int c)
{
	int	i;

	i = 0;
	if (find_index_a(data, c))
		i = data->a_len - find_index_a(data, c);
	i = find_place_b(data, c) + i;
	return (i);
}
