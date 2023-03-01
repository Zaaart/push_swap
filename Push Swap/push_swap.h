/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dydumont <dydumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:12:04 by dydumont          #+#    #+#             */
/*   Updated: 2023/03/01 14:13:13 by dydumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

/*ACTION DE MOUVEMENT---------------------------------------------------------*/
/*Rotate_stack (123 ==> 231)*/
void	rotate_stack_a(long *stack_a, int *numbers_stack_a);
void	rotate_stack_b(long *stack_b, int *numbers_stack_b);
void	rotate_stack_a_and_stack_b(long *stack_a, long *stack_b,
			int *numbers_stack_a, int *numbers_stack_b);
/*Reverse_stack (123 ==> 312)*/
void	reverse_rotate_stack_a(long *stack_a, int *numbers_stack_a);
void	reverse_rotate_stack_b(long *stack_b, int *numbers_stack_b);
void	reverse_rotate_stack_a_and_stack_b(long *stack_a, long *stack_b,
			int *numbers_stack_a, int *numbers_stack_b);
/*Push_stack (123 8910 ==> 8910 123)*/

/*Swap (123 ==> 213)*/
void	swap_stack_a(long *stack_a, int *numbers_stack_a);
void	swap_stack_b(long *stack_b, int *numbers_stack_b);
void	swap_stack_a_and_stack_b(long *stack_a, long *stack_b,
			int *numbers_stack_a, int *numbers_stack_b);
/*ALGO------------------------------------------------------------------------*/
/*UTILS-----------------------------------------------------------------------*/

/*Main------------------------------------------------------------------------*/
void	free_and_exit(int *numbers_stack_a, int *numbers_stack_b);
void	free_and_exit_errors(int *numbers_stack_a, int *numbers_stack_b);
void	set_numbers(int *numbers_stack_a, int *numbers_stack_b, int argc);
void	check_parameters(int argc, char **argv, int *numbers_stack_a,
			int *numbers_stack_b);
#endif
