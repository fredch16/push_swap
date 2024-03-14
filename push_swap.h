/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcharbon <fcharbon@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:32:27 by fcharbon          #+#    #+#             */
/*   Updated: 2024/03/13 14:09:53 by fcharbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libs/libft/libft.h"

typedef struct s_data
{
	char	**input_list;
	int		*stack_a;
	int		*stack_b;
	int		arr_len;
	int		a_len;
	int		b_len;
}	t_data;

int		is_valid_number(const char *str);
int		saul_goodman(char *str);
int		stack_sorted(t_data *data);
int		exist_in_array(t_data *data, int *array, int check);
int		find_maxstk(int *array, int len);
int		find_minstk(int *array, int len);
int		find_index_a(t_data *data, int nbr);
int		find_index_b(t_data *data, int nbr);
int		find_place_a(t_data *data, int nbr);
int		find_place_b(t_data *data, int nbr);
int		case_rrarb_b(t_data *data, int c);
int		case_rarrb_b(t_data *data, int c);
int		case_rrarrb_b(t_data *data, int c);
int		case_rarb_b(t_data *data, int c);
int		case_rrarb_a(t_data *data, int c);
int		case_rarrb_a(t_data *data, int c);
int		case_rrarrb_a(t_data *data, int c);
int		case_rarb_a(t_data *data, int c);
int		apply_rarb(t_data *data, int c, char s);
int		apply_rrarrb(t_data *data, int c, char s);
int		apply_rrarb(t_data *data, int c, char s);
int		apply_rarrb(t_data *data, int c, char s);
int		rotate_type_ba(t_data *data);
int		rotate_type_ab(t_data *data);
void	sort_b_till_3(t_data *data);
void	sort_b(t_data *data);
void	sort_a(t_data *data);
void	powersort(t_data *data);

void	sa(t_data *data, int toprint);
void	sb(t_data *data, int toprint);
void	ss(t_data *data);
void	rra(t_data *data, int toprint);
void	rrb(t_data *data, int toprint);
void	rrr(t_data *data);
void	ra(t_data *data, int toprint);
void	rb(t_data *data, int toprint);
void	rr(t_data *data);
void	pa(t_data *data);
void	pb(t_data *data);
void	sort_three(t_data *data);

#endif
