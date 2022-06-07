/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:48:32 by qbonvin           #+#    #+#             */
/*   Updated: 2022/06/07 16:30:13 by qbonvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include "limits.h"

typedef struct s_stack
{
	int			size_a;
	int			size_b;
	int			*stack_a;
	int			*stack_b;
	int			*temp_board;
	int			*stack_a_temp;
}	t_stack;

/*****************************
 * Function for checking error
 ****************************/
void		split_args(int argc, char **argv, t_stack *stack);
void		check_args(int argc, char **argv, t_stack *stack);
int			argv_is_digit(char **argv);
int			check_if_int(int argc, char **argv);
void		check_dup_number(t_stack *stack);
int			is_order(t_stack *stack);

/*****************************
 * Function utils
 ****************************/
int			error(char *str);
long int	ft_atol(const char *str);
void		display_stack(t_stack *stack);
void		display_stack_b(t_stack *stack);
void		solve(t_stack *stack);
int			create_index(t_stack *stack);
void		new_sort(t_stack *stack);
void		free_all(t_stack *stack);

/*****************************
 * Function for stacks
 ****************************/
void		init_stack(int argc, char **argv, t_stack *stack);
void		insert_to_stack_a(int argc, char **argv, t_stack *stack);
void		bigger_than_2_argv(int argc, char **argv, t_stack *stack);
void		egal_2_argv(int argc, char **argv, t_stack *stack);

/*****************************
 * Function
 ****************************/
void		sa(t_stack *stack);
void		sb(t_stack *stack);
void		ss(t_stack *stack);
void		pa(t_stack *stack);
void		pb(t_stack *stack);
void		ra(t_stack *stack);
void		rb(t_stack *stack);
void		rr(t_stack *stack);
void		rra(t_stack *stack);
void		rrb(t_stack *stack);
void		rrr(t_stack *stack);

/*****************************
 * Algo
 ****************************/
void		algo_with_2_args(t_stack *stack);
int			algo_with_3_args(t_stack *stack);
void		algo_with_4_args(t_stack *stack);
void		algo_with_5_args(t_stack *stack);
int			radix_sort(t_stack *stack);
void		sort_just_two(t_stack *stack);
void		sort_first_and_second_arg(t_stack *stack);
void		sort_two(t_stack *stack);
void		sort_three(t_stack *stack);
int			sort_algo_min(t_stack *stack);

#endif 