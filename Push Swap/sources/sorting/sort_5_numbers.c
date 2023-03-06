/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dydumont <dydumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:08:52 by dydumont          #+#    #+#             */
/*   Updated: 2023/03/06 13:09:23 by dydumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rotate_stack_a_radix(long *stack_a, int *numbers_stack_a)
{
	rotate_stack_a(stack_a, numbers_stack_a);
	rotate_stack_a(stack_a, numbers_stack_a);
}

void	reverse_rotate_stack_a_radix(long *stack_a, int *numbers_stack_a)
{
	reverse_rotate_stack_a(stack_a, numbers_stack_a);
	reverse_rotate_stack_a(stack_a, numbers_stack_a);
}

void	first_stack(long *stack_a, long *stack_b, int *numbers_stack_a, int *numbers_stack_b)
{
	if (stack_b[0] < stack_a[0])
		push_stack_a(stack_a, stack_b, numbers_stack_a, numbers_stack_b);
	else if ((stack_b[0] > stack_a[0]) && (stack_b[0] < stack_a[1]))
	{
		rotate_stack_a(stack_a, numbers_stack_a);
		push_stack_a(stack_a, stack_b, numbers_stack_a, numbers_stack_b);
		reverse_rotate_stack_a(stack_a, numbers_stack_a);
	}
	else if ((stack_b[0] > stack_a[1]) && (stack_b[0] < stack_a[2]))
	{
		reverse_rotate_stack_a(stack_a, numbers_stack_a);
		push_stack_a(stack_a, stack_b, numbers_stack_a, numbers_stack_b);
		reverse_rotate_stack_a(stack_a, numbers_stack_a);
		reverse_rotate_stack_a(stack_a, numbers_stack_a);
	}
	else if (stack_b[0] > stack_a[2])
	{
		push_stack_a(stack_a, stack_b, numbers_stack_a, numbers_stack_b);
		rotate_stack_a(stack_a, numbers_stack_a);
	}
}

void	second_stack(long *stack_a, long *stack_b, int *numbers_stack_a, int *numbers_stack_b)
{
	if (stack_b[0] < stack_a[0])
		push_stack_a(stack_a, stack_b, numbers_stack_a, numbers_stack_b);
	else if ((stack_b[0] > stack_a[0]) && (stack_b[0] < stack_a[1]))
	{
		rotate_stack_a(stack_a, numbers_stack_a);
		push_stack_a(stack_a, stack_b, numbers_stack_a, numbers_stack_b);
		reverse_rotate_stack_a(stack_a, numbers_stack_a);
	}
	else if ((stack_b[0] > stack_a[1]) && (stack_b[0] < stack_a[2]))
	{
		rotate_stack_a(stack_a, numbers_stack_a);
		push_stack_a(stack_a, stack_b, numbers_stack_a, numbers_stack_b);
		swap_stack_a(stack_a, numbers_stack_a);
		reverse_rotate_stack_a(stack_a, numbers_stack_a);
	}
	else if ((stack_b[0] > stack_a[2]) && (stack_b[0] < stack_a[3]))
	{
		reverse_rotate_stack_a(stack_a, numbers_stack_a);
		push_stack_a(stack_a, stack_b, numbers_stack_a, numbers_stack_b);
		rotate_stack_a_radix(stack_a, numbers_stack_a);
	}
	else if (stack_b[0] > stack_a[3])
		parameters(stack_a, stack_b, numbers_stack_a, numbers_stack_b);
}

void	sort_5_numbers(long *stack_a, long *stack_b, int *numbers_stack_a, int *numbers_stack_b)
{
	push_stack_b(stack_a, stack_b, numbers_stack_a, numbers_stack_b);
	push_stack_b(stack_a, stack_b, numbers_stack_a, numbers_stack_b);
	sort_3_numbers(stack_a, numbers_stack_a);
	while (*numbers_stack_b != 0)
	{
		if (numbers_stack_a[1] == 3)
			first_stack(stack_a, stack_b, numbers_stack_a, numbers_stack_b);
		else if (numbers_stack_a[1] == 4)
			second_stack(stack_a, stack_b, numbers_stack_a, numbers_stack_b);
	}
}
