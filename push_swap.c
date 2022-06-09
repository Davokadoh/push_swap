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

	i = 0;
	if (argc == -1)
		argc = str_array_size(argv);
	while (i < argc)
		stack_a[i] = ft_atoi(argv[i + 1]);
	i = 0;
	j = 0;
	while (i < argc)
		if (stack_a[i++] == stack_a[j++])
			return (1);
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
	int		stack_a[argc];
	char	*str;

	if (parse_input(stack_a, argc, argv) == 1)
		return (1);
	//stack_a = map(stack_a); //maps to [0,inf) continuously
	str = sort(stack_a, argc);
	//simplify(str); //Fuse sa+sb+ss , rr or rrr
	write(1, str, ft_strlen(str));
	free(str);
	return (0);
}
