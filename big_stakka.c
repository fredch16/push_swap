/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_stakka.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:30:43 by fcharbon          #+#    #+#             */
/*   Updated: 2024/03/14 21:51:15 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_stacks(t_data *data)
{
	int	i;

	i = 0;
	data->stack_a = (int *)malloc(sizeof(int *) * data->arr_len);
	data->stack_b = (int *)malloc(sizeof(int *) * data->arr_len);
	while (i < data->arr_len)
	{
		if (exist_in_array(data, data->stack_a, ft_atoi(data->input_list[i])))
		{
			ft_printf("Error\n");
			free(data->stack_a);
			free(data->stack_b);
			free(data->input_list);
			exit(EXIT_FAILURE);
		}
		data->stack_a[i] = ft_atoi(data->input_list[i]);
		i++;
		data->a_len++;
	}
	free(data->input_list);
}

void	args_to_input(t_data *data, int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc < 2)
		exit(EXIT_FAILURE);
	if (argc == 2)
		data->input_list = ft_split(argv[1], ' ');
	if (argc > 2)
	{
		data->input_list = (char **)malloc(sizeof(char *) * (argc));
		i = 0;
		while (argv[i + 1])
		{
			data->input_list[i] = argv[i + 1];
			i++;
		}
		data->input_list[i] = NULL;
	}
}

void	parse_and_build(t_data *data, int argc, char **argv)
{
	args_to_input(data, argc, argv);
	data->arr_len = 0;
	while (data->input_list[data->arr_len] != NULL)
	{
		if (!saul_goodman(data->input_list[data->arr_len]))
			exit(EXIT_FAILURE);
		data->arr_len++;
	}
	create_stacks(data);
}

void	sort_all(t_data *data)
{
	if (data->a_len == 2 && !stack_sorted(data))
	{
		sa(data, 1);
	}
	if (data->a_len == 3 && !stack_sorted(data))
	{
		sort_three(data);
	}
	else
		powersort(data);
	free(data->stack_a);
	free(data->stack_b);

}
int	main(int argc, char *argv[])
{
	t_data	data;

	data.a_len = 0;
	data.b_len = 0;
	parse_and_build(&data, argc, argv);
	sort_all(&data);
	return (0);
}
