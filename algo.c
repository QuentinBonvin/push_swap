/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:43:07 by qbonvin           #+#    #+#             */
/*   Updated: 2022/06/07 11:28:22 by qbonvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_with_2_args(t_stack *stack)
{
	if (stack->stack_a[0] > stack->stack_a[1])
		sa(stack);
	else
		exit (0);
}

int	algo_with_3_args(t_stack *stack)
{
	if (stack->stack_a[0] < stack->stack_a[1] \
	&& stack->stack_a[0] < stack->stack_a[2])
		sort_first_and_second_arg(stack);
	else if (stack->stack_a[0] > stack->stack_a[1] \
	&& stack->stack_a[0] > stack->stack_a[2])
		sort_three(stack);
	else
		sort_two(stack);
	return (0);
	if (stack->stack_a[1] < stack->stack_a[2])
	{
		rra(stack);
		rra(stack);
	}
	if (stack->stack_a[1] > stack->stack_a[2])
	{
		ra(stack);
		sa(stack);
	}
}

void	algo_with_4_args(t_stack *stack)
{
	while (stack->size_b < 1)
	{
		while (stack->stack_a[0] != 3)
		{
			printf("test\n");
			rra(stack);
		}
		pb(stack);
	}
	algo_with_3_args(stack);
	pa(stack);
	rra(stack);
}

void	algo_with_5_args(t_stack *stack)
{
	while (stack->size_b < 2)
	{
		while (stack->stack_a[0] != 3 && stack->stack_a[0] != 4)
		{
			ra(stack);
		}
		pb(stack);
	}
	algo_with_3_args(stack);
	if (stack->stack_b[0] == 3)
	{
		pa(stack);
		ra(stack);
		pa(stack);
		ra(stack);
	}
	else
	{
		pa(stack);
		pa(stack);
		ra(stack);
		ra(stack);
	}
}

