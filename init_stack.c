/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:47:30 by qbonvin           #+#    #+#             */
/*   Updated: 2022/06/07 14:03:41 by qbonvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack(int argc, char **argv, t_stack *stack)
{
	int	i;

	i = 0;
	if (argc > 2)
	{
		stack->size_a = argc - 1;
		//stack->size_b = argc - 1;
		stack->stack_a = malloc(sizeof(int) * argc - 1);
		stack->stack_b = malloc(sizeof(int) * argc - 1);
		stack->stack_a_temp = malloc(sizeof(int) * argc - 1);
		stack->temp_board = malloc(sizeof(int) * argc - 1);
	}
	if (argc == 2)
	{
		while (argv[i])
		{
			i++;
			stack->size_a++;
			//stack->size_b++;
		}
		stack->stack_a = malloc(sizeof(int) * stack->size_a);
		stack->stack_b = malloc(sizeof(int) * stack->size_a);
		stack->stack_a_temp = malloc(sizeof(int) * stack->size_a);
		stack->temp_board = malloc(sizeof(int) * stack->size_a);
	}
}

void	insert_to_stack_a(int argc, char **argv, t_stack *stack)
{
	/*int	i;
	int	j;
	int	k;

	i = -1;
	j = 0;
	k = 1;*/
	bigger_than_2_argv(argc, argv, stack);
	/*if (argc > 2)
	{
		while (argc - 1)
		{
			stack->stack_a[++i] = ft_atoi(argv[k]);
			k++;
			argc--;
		}
	}*/
	egal_2_argv(argc, argv, stack);
	/*if (argc == 2)
	{
		while (argv[j])
		{
			stack->stack_a[++i] = ft_atoi(argv[j]);
			j++;
		}
	}*/
}

void	bigger_than_2_argv(int argc, char **argv, t_stack *stack)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 1;
	if (argc > 2)
	{
		while (argc - 1)
		{
			stack->stack_a[i] = ft_atoi(argv[k]);
			stack->temp_board[i] = ft_atoi(argv[k]);
			stack->temp_board[i] = ft_atoi(argv[k]);
			k++;
			i++;
			argc--;
		}
	}
}

void	egal_2_argv(int argc, char **argv, t_stack *stack)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 1;
	if (argc == 2)
	{
		while (argv[j])
		{
			stack->stack_a[i] = ft_atoi(argv[j]);
			stack->stack_a_temp[i] = ft_atoi(argv[j]);
			stack->temp_board[i] = ft_atoi(argv[j]);
			i++;
			j++;
		}
	}
}
