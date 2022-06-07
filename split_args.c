/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:55:26 by qbonvin           #+#    #+#             */
/*   Updated: 2022/06/07 10:30:24 by qbonvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	split_args(int argc, char **argv, t_stack *stack)
{
	int		i;
	int		j;
	char	**argument;

	i = -1;
	j = 0;
	argument = ft_split(argv[1], ' ');
	while (argument[++i])
	{
		while (argument[i][j])
		{
			if (argument[i][j] == '-')
				j++;
			if ((argument[i][j] < 48 || argument[i][j] > 57))
				error("error\nnot a digit number\n");
			j++;
		}
		j = 0;
	}
	init_stack(argc, argument, stack);
	check_if_int(argc, argument);
	insert_to_stack_a(argc, argument, stack);
	check_dup_number(stack);
	is_order(stack);
}
