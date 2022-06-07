/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:06:08 by qbonvin           #+#    #+#             */
/*   Updated: 2022/06/06 08:36:46 by qbonvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error(char *str)
{
	ft_putstr(str);
	exit (0);
}

long int	ft_atol(const char *str)
{
	long int	index;
	long int	sign;
	long int	res;

	res = 0;
	sign = 1;
	index = 0;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == 32)
	{
		index++;
	}
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign *= -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		res = res * 10 + str[index] - '0';
		index++;
	}
	return (res * sign);
}

void	display_stack(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack->stack_a[i])
	{
		printf("[%d] = %d\n", i, stack->stack_a[i]);
		i++;
	}
}

void	display_stack_b(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack->stack_b[i])
	{
		printf("[%d] = %d\n", i, stack->stack_b[i]);
		i++;
	}
}