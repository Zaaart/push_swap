/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dydumont <dydumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 08:57:53 by dydumont          #+#    #+#             */
/*   Updated: 2023/03/06 13:56:58 by dydumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	swap_stack_a(long *stack_a, int *numbers_stack_a)
{
	long	*tempo;

	tempo = (long *)malloc(sizeof(long));
	if (numbers_stack_a[1] > 1)
	{
		tempo[0] = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = tempo[0];
	}
	free(tempo);
	write(1, "sa\n", 3);
}

void	swap_stack_b(long *stack_b, int *numbers_stack_b)
{
	long	*tempo;

	tempo = (long *)malloc(sizeof(long));
	if (*numbers_stack_b > 1)
	{
		tempo[0] = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = tempo[0];
	}
	free(tempo);
	write(1, "sb\n", 3);
}

void	swap_stack_a_and_stack_b(long *stack_a, long *stack_b, int *numbers_stack_a, int *numbers_stack_b)
{
	long	*tempo;

	tempo = (long *)malloc(sizeof(long));
	if (numbers_stack_a[1] > 1)
	{
		tempo[0] = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = tempo[0];
	}
	if (*numbers_stack_b > 1)
	{
		tempo[0] = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = tempo[0];
	}
	free(tempo);
	write(1, "ss\n", 3);
}
