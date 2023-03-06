/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dydumont <dydumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 08:57:50 by dydumont          #+#    #+#             */
/*   Updated: 2023/03/06 13:02:37 by dydumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rotate_stack_a(long *stack_a, int *numbers_stack_a)
{
	int		i;
	long	*temporary;

	i = 0;
	temporary = (long *)malloc(sizeof(long));
	*temporary = stack_a[0];
	while (i < numbers_stack_a[1])
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[numbers_stack_a[1] - 1] = *temporary;
	free(temporary);
	write(1, "Rotate Stack A\n", 15);
}

void	rotate_stack_b(long *stack_b, int *numbers_stack_b)
{
	int		i;
	long	*temporary;

	i = 0;
	temporary = (long *)malloc(sizeof(long));
	*temporary = stack_b[0];
	while (i < *numbers_stack_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[*numbers_stack_b - 1] = *temporary;
	free(temporary);
	write(1, "Rotate Stack B\n", 15);
}

void	rotate_stack_a_and_stack_b(long *stack_a, long *stack_b, int *numbers_stack_a, int *numbers_stack_b)
{
	int		i;
	long	*temporary;

	i = 0;
	temporary = (long *)malloc(sizeof(long));
	*temporary = stack_a[0];
	while (i < numbers_stack_a[1])
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[numbers_stack_a[1] - 1] = *temporary;
	i = 0;
	*temporary = stack_b[0];
	while (i < *numbers_stack_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[*numbers_stack_b - 1] = *temporary;
	free(temporary);
	write(1, "Rotate both Stack A and Stack B\n", 44);
}
