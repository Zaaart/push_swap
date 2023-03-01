/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dydumont <dydumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:32:28 by dydumont          #+#    #+#             */
/*   Updated: 2023/03/01 14:13:12 by dydumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	free_and_exit(int *numbers_stack_a, int *numbers_stack_b)
{
	free(numbers_stack_a);
	free(numbers_stack_b);
	exit(0);
}

void	free_and_exit_errors(int *numbers_stack_a, int *numbers_stack_b)
{
	free(numbers_stack_a);
	free(numbers_stack_b);
	write(1, "Error\n", 6);
	exit(0);
}

void	check_parameters(int argc, char **argv, int *numbers_stack_a,
	int *numbers_stack_b)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (argc < 2)
		free_and_exit(numbers_stack_a, numbers_stack_b);
	while (i < argc)
	{
		if ((argv[i][ft_strlen(argv[i]) - 1] == ' ') || (argv[i][0] == ' '))
			free_and_exit_errors(numbers_stack_a, numbers_stack_b);
		j = 0;
		while (j < ft_strlen(argv[i]))
		{
			if (((argv[i][j] < 48) || (argv[i][j] > 57)) && (argv[i][j] != 32))
			{
				if (argv[i][j] != 45)
					free_and_exit_errors(numbers_stack_a, numbers_stack_b);
			}
			if ((argv[i][j] == 32) && (argv[i][j + 1] == 32))
				free_and_exit_errors(numbers_stack_a, numbers_stack_b);
			j++;
		}
		i++;
	}
}

void	set_numbers(int *numbers_stack_a, int *numbers_stack_b, int argc)
{
	numbers_stack_a[0] = argc - 1;
	numbers_stack_a[1] = numbers_stack_a[0];
	*numbers_stack_b = 0;
}

int	main(int argc, char **argv)
{
	long	*stack_a;
	long	*stack_b;
	int		*numbers_stack_a;
	int		*numbers_stack_b;

	numbers_stack_a = (int *)malloc(2 * sizeof(int));
	numbers_stack_b = (int *)malloc(sizeof(int));
	check_parameters(argc, argv, numbers_stack_a, numbers_stack_b);
	set_numbers(numbers_stack_a, numbers_stack_b, argc);
	stack_a = (long *)malloc(sizeof(long) * stack_size(argc, argv));
	stack_b = (long *)malloc(sizeof(long) * stack_size(argc, argv));
}
