/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   casesa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:42:39 by fcharbon          #+#    #+#             */
/*   Updated: 2024/03/11 23:49:08 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	case_rarb_a(t_data *data, int c)
{
	int	i;

	i = find_place_a(data, c);
	if (i < find_index_b(data, c))
		i = find_index_b(data, c);
	return (i);
}

int	case_rrarrb_a(t_data *data, int c)
{
	int	i;

	i = 0;
	if (find_place_a(data, c))
		i = data->a_len - find_place_a(data, c);
	if ((i < (data->b_len - find_index_b(data, c))) && find_index_b(data, c))
		i = data->b_len - find_index_b(data, c);
	return (i);
}

int	case_rarrb_a(t_data *data, int c)
{
	int	i;

	i = 0;
	if (find_index_b(data, c))
		i = data->b_len - find_index_b(data, c);
	i = find_place_a(data, c) + i;
	return (i);
}

int	case_rrarb_a(t_data *data, int c)
{
	int	i;

	i = 0;
	if (find_place_a(data, c))
		i = data->a_len - find_place_a(data, c);
	i = find_index_b(data, c) + i;
	return (i);
}
