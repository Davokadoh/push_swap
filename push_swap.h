/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:52:35 by jleroux           #+#    #+#             */
/*   Updated: 2022/06/09 15:30:35 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

int		*parse_input(int argc, char *argv[]);
int		fill_stack(int *stack_a, int argc, char *argv[]);
int		is_sorted(int *stack);
char*	sort(int *stack_a, int argc);
char*	sort3(int *stack_a, int argc);
char*	sort5(int *stack_a, int argc);
char*	sort100(int *stack_a, int argc);
char*	sort500(int *stack_a, int argc);
void	smart_push(int nbr, int *stack);

#endif
