/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dydumont <dydumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 08:57:43 by dydumont          #+#    #+#             */
/*   Updated: 2023/03/01 14:13:15 by dydumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	push_stack_a(long *stack_a, long *stack_b,
			int *numbers_stack_a, int *numbers_stack_b)
{
	int	i;

	(numbers_stack_a[1])++;
	i = numbers_stack_a[1] - 1;
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = stack_b[0];
	i = 0;
	while (i < *numbers_stack_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	(*numbers_stack_b)--;
	if (*numbers_stack_b == 0)
		stack_b = NULL;
	write(1, "pa\n", 13);
}

void	push_stack_b(long *stack_a, long *stack_b,
			int *numbers_stack_a, int *numbers_stack_b)
{
	int	i;

	(*numbers_stack_b)++;
}
