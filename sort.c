/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 13:03:18 by jleroux           #+#    #+#             */
/*   Updated: 2022/06/09 15:18:38 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	is_sorted(int *stack)
{
	int	i;

	i = -1;
	while (++i < max - 1)
		if (stack[i] > stack[i + 1])
			return (0);
	return (1);
}

void	smart_push(int nbr, int stack)
{
	int	len;

	len = len(stack);
	if (nbr > stack[len/2])
		while (nbr > stack[0] && nbr < stack[len])
			rrot(cmds, a);
	else
		while (nbr > stack[0] && nbr < stack[len])
			rot(cmds, a);
}

char*	sort_3(int stack_a, char *cmds)
{
	while (!is_sorted(stack_a))
	{
		if (stack_a[0] == stack_a[1] + 1)
			swap(cmds, a);
		else if (stack_a[0] == 3 && stack_a[1] == 1)
			rot(cmds, a);
		else
			rrot(cmds, a);
	}
	return (cmds);
}

char*	sort_5(int stack_a, char *cmds)
{
	if (!is_sorted(stack_a))
	{
		push(cmds, a, b);
		push(cmds, a, b);
		sort_3(stack_a, cmds);
		while (stack_b[0])
		{
			smart_push(stack_b[0], stack_a);
			push(cmds, b, a);
		}
	}
	return (cmds);
}

char*	sort(int stack_a, int argc)
{
	char	*cmds;

	if (size <= 3)
		return (sort_3(stack_a));
	else if (size <= 5)
		return (sort_5());
	else if (size <= 100)
		return (sort_100());
	else 
		return (sort_500());
}
