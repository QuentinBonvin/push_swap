/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:47:34 by qbonvin           #+#    #+#             */
/*   Updated: 2022/06/07 11:42:19 by qbonvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	check_args(argc, argv, stack);
	display_stack(stack);
	//printf("\n");
	solve(stack);
	display_stack(stack);
	return (0);
}
