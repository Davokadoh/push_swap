/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 13:03:18 by jleroux           #+#    #+#             */
/*   Updated: 2022/06/13 15:29:43 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	is_sorted(int *stack)
{
	int	i;
	int	max;

	i = 0;
	while (stack[++i])
		if (stack[i - 1] > stack[i])
			return (0);
	return (1);
}

int	array_size(int *stack)
{
	int	i;

	i = 0;
	while (stack[i++])
		;
	return (i);
}

void	smart_push(int nbr, int *stack)
{
	int	len;

	len = array_size(stack);
	if (nbr > stack[len/2])
		while (nbr > stack[0] && nbr < stack[len])
			rrot(cmds, stack_a);
	else
		while (nbr > stack[0] && nbr < stack[len])
			rot(cmds, stack_a);
}

char*	sort(int *stack_a, int argc)
{
	char	*cmds;
	int		size;

	size = array_size(stack_a);
	if (size <= 3)
		return (sort_3(stack_a));
	else if (size <= 5)
		return (sort_5(stack_a));
	else if (size <= 100)
		return (sort_100(stack_a));
	else 
		return (sort_500(stack_a));
}
