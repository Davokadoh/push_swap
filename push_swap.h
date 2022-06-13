/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:52:35 by jleroux           #+#    #+#             */
/*   Updated: 2022/06/13 15:36:26 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

int		parse_input(int *stack_a, int argc, char *argv[]);
int		fill_stack(int *stack_a, int argc, char *argv[]);
int		str_array_size(char *argv[]);
int		array_size(int *stack);
int		is_sorted(int *stack);
void	add_cmd(char *cmds, char *cmd, char ch);
void	swap(char *cmds, int *stack, char ch);
void	rot(char *cmds, int *stack, char ch);
void	rrot(char *cmds, int *stack, char ch);
char*	sort(int *stack_a, int argc);
char*	sort3(int *stack_a, int argc);
char*	sort5(int *stack_a, int argc);
char*	sort100(int *stack_a, int argc);
char*	sort500(int *stack_a, int argc);
void	smart_push(int nbr, int *stack);

#endif
