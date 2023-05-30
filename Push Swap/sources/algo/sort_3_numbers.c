/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dydumont <dydumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:59:51 by dydumont          #+#    #+#             */
/*   Updated: 2023/03/06 12:57:21 by dydumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_3_numbers(long *stack_a, int *numbers_stack_a)
{
	if ((stack_a[0] > stack_a[1]) && (stack_a[1] < stack_a[2]) && (stack_a[0] < stack_a[2]))
		swap_stack_a(stack_a, numbers_stack_a);
	if ((stack_a[0] > stack_a[1]) && (stack_a[1] > stack_a[2]) && (stack_a[0] > stack_a[2]))
	{
		swap_stack_a(stack_a, numbers_stack_a);
		reverse_rotate_stack_a(stack_a, numbers_stack_a);
	}
	if ((stack_a[0] > stack_a[1]) && (stack_a[1] < stack_a[2]) && (stack_a[0] > stack_a[2]))
		rotate_stack_a(stack_a, numbers_stack_a);
	if ((stack_a[0] < stack_a[1]) && (stack_a[1] > stack_a[2]) && (stack_a[0] < stack_a[2]))
	{
		swap_stack_a(stack_a, numbers_stack_a);
		rotate_stack_a(stack_a, numbers_stack_a);
	}
	if ((stack_a[0] < stack_a[1]) && (stack_a[1] > stack_a[2]) && (stack_a[0] > stack_a[2]))
		reverse_rotate_stack_a(stack_a, numbers_stack_a);
}
