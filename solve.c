/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:51:18 by qbonvin           #+#    #+#             */
/*   Updated: 2022/06/08 16:45:34 by qbonvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	solve(t_stack *stack)
{
	if (!(is_order(stack)))
	{
		if (stack->size_a == 2)
			algo_with_2_args(stack);
		else if (stack->size_a == 3)
			algo_with_3_args(stack);
		else if (stack->size_a == 4)
			algo_with_4_args(stack);
		else if (stack->size_a == 5)
			algo_with_5_args(stack);
		else
			radix_sort(stack);
	}
}
