/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:02:39 by qbonvin           #+#    #+#             */
/*   Updated: 2022/06/09 13:33:07 by qbonvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_args(int argc, char **argv, t_stack *stack)
{
	if (argc < 2)
		exit (0);
	if (argc == 2)
		split_args(argc, argv, stack);
	if (argc > 2)
	{
		init_stack(argc, argv, stack);
		check_if_int(argc, argv);
		argv_is_digit(argv);
		insert_to_stack_a(argc, argv, stack);
		check_dup_number(stack);
		is_order(stack);
	}
}

int	check_if_int(int argc, char **argv)
{
	long int	i;
	long int	j;
	long int	*args;

	i = 0;
	j = 0;
	args = malloc(sizeof(int) * argc - 1);
	while (argv[i])
	{
		args[j] = ft_atol(argv[i]);
		if (args[j] < INT_MIN || args[j] > INT_MAX)
		{
			error("error\nnot a integer\n");
		}
		j++;
		i++;
	}
	free(args);
	return (0);
}

int	argv_is_digit(char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (argv[i][j] == '-')
				j++;
			if (argv[i][j] < 48 || argv[i][j] > 57)
				error("error\nnot a digit number\n");
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

void	check_dup_number(t_stack *stack)
{
	int	i;
	int	j;

	j = 0;
	while (j < stack->size_a)
	{
		i = j + 1;
		while (i < stack->size_a)
		{
			if (stack->stack_a[j] != stack->stack_a[i])
				i++;
			else
				error("error\nduplicate number\n");
		}
		j++;
	}
}

int	is_order(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size_a - 1)
	{
		if (stack->stack_a[i] < stack->stack_a[i + 1])
			i++;
		else
			return (0);
	}
	return (1);
}
