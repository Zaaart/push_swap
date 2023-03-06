/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dydumont <dydumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:52:44 by dydumont          #+#    #+#             */
/*   Updated: 2023/03/06 13:05:36 by dydumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_isdigit(int i)
{
	while ('0' <= i && i <= '9')
		return (1);
	return (0);
}

int	is_only_numbers_in_the_stacks(char *numbers)
{
	int	i;
	int	minus;

	i = 0;
	minus = 0;
	while (numbers[i])
	{
		if (numbers[i] == 45)
			minus++;
		else if (ft_isdigit(numbers[i]) == 0)
			return (0);
		i++;
	}
	if (minus > 1)
		return (0);
	return (1);
}

int	number_limits(long *stack_a, int numbers_stack_a)
{
	int	i;

	i = 0;
	while (i < numbers_stack_a)
	{
		if ((stack_a[i] > 2147483647) || (stack_a[i] < -2147483648))
		{
			write(1, "Error\n", 6);
			return (-1);
		}
		i++;
	}
	return (0);
}

int	is_stack_sorted(long *stack_a, int *numbers_stack_a)
{
	int		i;
	int		j;
	long	max;

	i = 1;
	j = 0;
	max = stack_a[0];
	while (i < numbers_stack_a[1])
	{
		if (stack_a[i] > max)
		{
			max = stack_a[i];
			j++;
		}
		i++;
	}
	if (j == numbers_stack_a[1] - 1)
		return (0);
	return (-1);
}
