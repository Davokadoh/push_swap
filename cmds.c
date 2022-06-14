/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmds.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:25:44 by jleroux           #+#    #+#             */
/*   Updated: 2022/06/13 15:36:24 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	add_cmd(char *cmds, char *cmd, char ch)
{
	if (*cmds)
		ft_strjoin(cmds, " ");
	ft_strjoin(cmds, cmd);
	ft_strjoin(cmds, ch);
}

void	swap(char *cmds, int *stack, char ch)
{
	int	tmp;

	tmp = stack[0];
	stack[0] = stack[1];
	stack[1] = tmp;
	add_cmd(cmds, "s", ch);
}

void	rot(char *cmds, int *stack, char ch)
{
	int	i;
	int	tmp;

	tmp = stack[0];
	i = 0;
	while (stack[++i])
		stack[i - 1] = stack[i];
	stack[--i] = tmp;
	add_cmd(cmds, "r", ch);
}

void	rrot(char *cmds, int *stack, char ch)
{
	int	i;
	int	tmp;

	i = 0;
	while (stack[i])
		i++;
	tmp = stack[--i];
	while (--i > 0)
		stack[i + 1] = stack[i];
	stack[0] = tmp;
	add_cmd(cmds, "rr", ch);
}

void	push(int *old_src, int *old_dst)
{
	int	i;
	int	len;
	int	*new_src;
	int	*new_dst;

	i = 0;
	len = 0;
	while (old_src[i])
		len++;
	new_src = malloc((len - 1) * sizeof(int));
	i = 0;
	len = 0;
	while (old_dst[i])
		len++;
	new_dst = malloc((len + 1) * sizeof(int));
	new_dst[0] = old_src[0];
	while (new_dst[i + 1] && old_dst[i])
		new_dst[i + 1] == old_dst[i];
	while (new_src[i] && old_src[i + 1])
		new_src[i] = old_src[i + 1];
	free_array(old_src);
	free_array(old_dst);
}