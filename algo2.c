/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:45:49 by qbonvin           #+#    #+#             */
/*   Updated: 2022/06/08 11:10:39 by qbonvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_just_two(t_stack *stack)
{
	if (stack->stack_a[0] > stack->stack_a[1])
		sa(stack);
	else
		exit (0);
}

void	sort_first_and_second_arg(t_stack *stack)
{
	if (stack->stack_a[1] > stack->stack_a[2])
	{
		rra(stack);
		sa(stack);
	}
}

void	sort_two(t_stack *stack)
{
	if (stack->stack_a[1] < stack->stack_a[2])
		sa(stack);
	else if (stack->stack_a[1] > stack->stack_a[2])
		rra(stack);
}

void	sort_three(t_stack *stack)
{
	if (stack->stack_a[1] < stack->stack_a[2])
	{
		rra(stack);
		rra(stack);
	}
	else if (stack->stack_a[1] > stack->stack_a[2])
	{
		ra(stack);
		sa(stack);
	}
}
