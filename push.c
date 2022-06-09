/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:12:10 by qbonvin           #+#    #+#             */
/*   Updated: 2022/06/09 11:51:18 by qbonvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *stack)
{
	int	slot;

	slot = stack->size_a + 1;
	if (stack->size_b == 0)
		return ;
	if (stack->size_a == 0)
		stack->stack_a[0] = stack->stack_b[0];
	if (stack->size_a > 0)
	{
		while (--slot > 0)
			stack->stack_a[slot] = stack->stack_a[slot - 1];
		stack->stack_a[0] = stack->stack_b[0];
	}
	slot = -1;
	while (++slot < stack->size_b)
		stack->stack_b[slot] = stack->stack_b[slot + 1];
	stack->size_a++;
	stack->size_b--;
	ft_printf("pa\n");
}

void	pb(t_stack *stack)
{
	int	slot;

	slot = stack->size_b + 1;
	if (stack->size_a == 0)
		return ;
	if (stack->size_b == 0)
		stack->stack_b[0] = stack->stack_a[0];
	if (stack->size_b > 0)
	{
		while (--slot > 0)
			stack->stack_b[slot] = stack->stack_b[slot - 1];
		stack->stack_b[0] = stack->stack_a[0];
	}
	slot = -1;
	while (++slot < stack->size_a)
		stack->stack_a[slot] = stack->stack_a[slot + 1];
	stack->size_a--;
	stack->size_b++;
	ft_printf("pb\n");
}
