/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dydumont <dydumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 08:57:53 by dydumont          #+#    #+#             */
/*   Updated: 2023/03/06 13:04:18 by dydumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	swap_stack_a(long *stack_a, int *numbers_stack_a)
{
	long	*temporary;

	temporary = (long *)malloc(sizeof(long));
	if (numbers_stack_a[1] > 1)
	{
		temporary[0] = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = temporary[0];
	}
	free(temporary);
	write(1, "Swap Stack A\n", 13);
}

void	swap_stack_b(long *stack_b, int *numbers_stack_b)
{
	long	*temporary;

	temporary = (long *)malloc(sizeof(long));
	if (*numbers_stack_b > 1)
	{
		temporary[0] = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = temporary[0];
	}
	free(temporary);
	write(1, "Swap Stack B\n", 13);
}

void	swap_stack_a_and_stack_b(long *stack_a, long *stack_b, int *numbers_stack_a, int *numbers_stack_b)
{
	long	*temporary;

	temporary = (long *)malloc(sizeof(long));
	if (numbers_stack_a[1] > 1)
	{
		temporary[0] = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = temporary[0];
	}
	if (*numbers_stack_b > 1)
	{
		temporary[0] = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = temporary[0];
	}
	free(temporary);
	write(1, "Swap both Stack A and Stack B\n", 42);
}

