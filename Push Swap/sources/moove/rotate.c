/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dydumont <dydumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 08:57:50 by dydumont          #+#    #+#             */
/*   Updated: 2023/03/06 13:56:49 by dydumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rotate_stack_a(long *stack_a, int *numbers_stack_a)
{
	int		i;
	long	*tempo;

	i = 0;
	tempo = (long *)malloc(sizeof(long));
	*tempo = stack_a[0];
	while (i < numbers_stack_a[1])
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[numbers_stack_a[1] - 1] = *tempo;
	free(tempo);
	write(1, "ra\n", 3);
}

void	rotate_stack_b(long *stack_b, int *numbers_stack_b)
{
	int		i;
	long	*tempo;

	i = 0;
	tempo = (long *)malloc(sizeof(long));
	*tempo = stack_b[0];
	while (i < *numbers_stack_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[*numbers_stack_b - 1] = *tempo;
	free(tempo);
	write(1, "rb\n", 15);
}

void	rotate_stack_a_and_stack_b(long *stack_a, long *stack_b, int *numbers_stack_a, int *numbers_stack_b)
{
	int		i;
	long	*tempo;

	i = 0;
	tempo = (long *)malloc(sizeof(long));
	*tempo = stack_a[0];
	while (i < numbers_stack_a[1])
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[numbers_stack_a[1] - 1] = *tempo;
	i = 0;
	*tempo = stack_b[0];
	while (i < *numbers_stack_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[*numbers_stack_b - 1] = *tempo;
	free(tempo);
	write(1, "rr\n", 3);
}
