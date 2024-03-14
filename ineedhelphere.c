/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ineedhelphere.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:20:06 by fcharbon          #+#    #+#             */
/*   Updated: 2024/03/14 21:51:41 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_valid_number(const char *str)
{
	if (!str || !*str)
		return (0);
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
	{
		if (!(*str <= '9' && *str >= '0'))
			return (0);
		str++;
	}
	return (1);
}

int	saul_goodman(char *str)
{
	if (!is_valid_number(str))
	{
		ft_printf("Error\n");
		return (0);
	}
	if (ft_atol(str) > INT_MAX || ft_atol(str) < INT_MIN)
	{
		ft_printf("Error\n");
		return (0);
	}
	return (1);
}

int	exist_in_array(t_data *data, int *array, int check)
{
	int		i;

	i = 0;
	while (i < data->a_len)
	{
		if (check == array[i])
			return (1);
		i++;
	}
	return (0);
}

int	stack_sorted(t_data *data)
{
	int		i;

	i = 0;
	while (i < data->a_len - 1)
	{
		if (data->stack_a[i] > data->stack_a[i + 1])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	find_maxstk(int *array, int len)
{
	long	max;
	int		i;

	max = LONG_MIN;
	i = 0;
	while (i < len)
	{
		if (array[i] > max)
			max = array[i];
		i++;
	}
	return (max);
}
