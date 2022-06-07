/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:53:30 by qbonvin           #+#    #+#             */
/*   Updated: 2022/06/07 16:19:27 by qbonvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	new_sort(t_stack *stack)
{
    int	i;
	int	j;
	int	tmp;
	
	i = 0;
	while (i < stack->size_a - 1)
	{
		j = i + 1;
		while (j < stack->size_a)
		{
			if (stack->temp_board[i] > stack->stack_a_temp[j])
			{
				tmp = stack->temp_board[i];
				stack->temp_board[i] = stack->temp_board[j];
				stack->temp_board[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	create_index(t_stack *stack)
{
	int	i;
	int	j;
	int	new_value;

	new_value = 0;
	i = 0;
	new_sort(stack);
	while (i < stack->size_a)
	{
		j = 0;
		while (j < stack->size_a)
		{
			if (stack->temp_board[i] == stack->stack_a_temp[j])
			{
				stack->stack_a[j] = new_value;
				new_value++;
			}
			j++;
		}
		i++;
	}
	return (0);
}