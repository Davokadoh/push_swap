/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 11:23:24 by jleroux           #+#    #+#             */
/*   Updated: 2022/06/09 16:46:11 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	str_array_size(char *argv[])
{
	int	i;

	i = 0;
	while (argv[i++])
		;
	return (i);
}

int	fill_stack(int *stack_a, int argc, char *argv[])
{
	int	i;
	int	j;

	i = -1;
	if (argc == -1)
		argc = str_array_size(argv);
	stack_a = calloc((argc + 1)); // Unsure about the +1
	while (++i < argc)
		stack_a[i] = ft_atoi(argv[i + 1]);
	i = -1;
	while (++i < argc)
	{
		j = i;
		while (++j < argc)
		{
			if (i != j && stack_a[i] == stack_a[j]) //is i != j really necessary ?
				return (1);
		}
	}
	return (0);
}

int	parse_input(int *stack_a, int argc, char *argv[])
{
	int	status;

	if (argc == 2)
		status = fill_stack(stack_a, -1, ft_split(argv[1], ' '));
	else if (argc > 2)
		status = fill_stack(stack_a, argc, argv);
	else
		status = 1;
	if (status == 1)
		return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	int		stack_a[];
	char	*cmds;

	if (parse_input(stack_a, argc, argv) == 1)
		return (1);
	//stack_a = map(stack_a); //maps to [0,inf) continuously
	cmds = sort(stack_a, argc);
	free(stack_a);
	free(stack_b);
	// simplify(cmds); //Fuse sa+sb=ss , ra+rb=rr or rra+rrb=rrr
	write(1, cmds, ft_strlen(cmds));
	free(cmds);
	return (0);
}