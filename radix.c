/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:27:44 by qbonvin           #+#    #+#             */
/*   Updated: 2022/06/07 11:52:13 by qbonvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort_stack_a(t_stack *stack)
{
	unsigned int	i;
	int	j;

	i = 0;
	while (i < stack->size_a - 1)
	{
		j = i + 1;
		if (stack->stack_a[i] < stack->stack_a[j])
			i++;
		else
			return (0);
	}
	return (1);
}

int	nbr_bit(t_stack *stack)
{
	int	i;
	int	len;

	i = 0;
	len = stack->size_a;
	while (len)
	{
		len = len / 2;
		i++;
	}
	return (i + 1);
}

int	radix_sort(t_stack *stack)
{
	int	i;
	int	j;
	int	max;

	i = -1;
	max = nbr_bit(stack);
    printf("testt =%d\n", max);
	while (++i < max && (!(is_order(stack))))
	{
		j = stack->size_a;
		while (j-- > 0)
		{
			if (stack->stack_a[0] >> i & 1)
				rra(stack);
			else
				pb(stack);
		}
		j = stack->size_b;
		while (stack->size_b)
			pa(stack);
	}
	j = stack->size_b;
	while (j-- > 0)
		pa(stack);
	return (0);
}