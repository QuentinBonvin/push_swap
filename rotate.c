/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:14:14 by qbonvin           #+#    #+#             */
/*   Updated: 2022/06/08 11:50:58 by qbonvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack)
{
	int	i;
	int	temp;

	if (1 < stack->size_a)
	{
		i = 0;
		temp = stack->stack_a[0];
		while (i < stack->size_a)
		{
			stack->stack_a[i] = stack->stack_a[i + 1];
			i++;
		}
		stack->stack_a[stack->size_a - 1] = temp;
		ft_printf("ra\n");
	}
}

void	rb(t_stack *stack)
{
	int	i;
	int	temp;

	if (1 < stack->size_b)
	{
		i = 0;
		temp = stack->stack_b[0];
		while (i < stack->size_b)
		{
			stack->stack_b[i] = stack->stack_b[i + 1];
			i++;
		}
		stack->stack_b[stack->size_b - 1] = temp;
		ft_printf("rb\n");
	}
}

void	rr(t_stack *stack)
{
	ra(stack);
	rb(stack);
}
