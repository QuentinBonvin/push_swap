/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:25:49 by qbonvin           #+#    #+#             */
/*   Updated: 2022/06/07 14:09:06 by qbonvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack)
{
	int	i;
	int	temp;

	i = stack->size_a;
	temp = stack->stack_a[stack->size_a - 1];
	while (i-- > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
	}
	stack->stack_a[0] = temp;
	ft_printf("rra\n");
}

void	rrb(t_stack *stack)
{
	int	i;
	int	temp;

	i = stack->size_b;
	temp = stack->stack_b[stack->size_b - 1];
	while (i > 0)
	{
		i--;
		stack->stack_b[i] = stack->stack_b[i - 1];
	}
	stack->stack_b[0] = temp;
	ft_printf("rra\n");
}

void	rrr(t_stack *stack)
{
	(void)stack;
}
