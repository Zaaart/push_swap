/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dydumont <dydumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:43:50 by dydumont          #+#    #+#             */
/*   Updated: 2023/03/06 13:07:04 by dydumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	free_stacks(long *stack_a, long *stack_b, int *numbers_stack_a, int *numbers_stack_b)
{
	free(stack_a);
	free(stack_b);
	free(numbers_stack_a);
	free(numbers_stack_b);
	exit(0);
}

int	stack_size(int argc, char **argv)
{
	int	i;
	int	size;

	i = 0;
	size = 1;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 32)
				size++;
			i++;
		}
	}
	else
		size = argc - 1;
	return (size);
}

int	repeated_numbers(long *stack_a, int numbers_stack_a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < numbers_stack_a)
	{
		j = 0;
		while (j < numbers_stack_a)
		{
			if ((stack_a[i] == stack_a[j]) && (i != j))
			{
				write(1, "Error\n", 6);
				return (-1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_reallocation(long *pointer, int startsize, int newsize)
{
	int		i;
	long	*temporary;

	i = 0;
	if ((pointer != NULL) && (startsize < newsize))
	{
		temporary = malloc(sizeof(long) * (newsize));
		while (i < startsize)
		{
			temporary[i] = pointer[i];
			i++;
		}
		pointer = temporary;
	}
	else if ((pointer != NULL) && (startsize > newsize))
	{
		temporary = malloc(sizeof(long) * (newsize));
		while (i < newsize)
		{
			temporary[i] = pointer[i];
			i++;
		}
		pointer = temporary;
	}
}

void	parameters(long *stack_a, long *stack_b, int *numbers_stack_a, int *numbers_stack_b)
{
	push_stack_a(stack_a, stack_b, numbers_stack_a, numbers_stack_b);
	rotate_stack_a(stack_a, numbers_stack_a);
}
