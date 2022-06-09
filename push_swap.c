/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 11:23:24 by jleroux           #+#    #+#             */
/*   Updated: 2022/06/09 16:11:55 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	fill_stack(int *stack_a, int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
		stack_a[i] = ft_atoi(argv[i + 1]);
	i = 0;
	j = 0;
	while (i < argc)
		if (stack_a[i++] == stack_a[j++])
			return (0);
	return (1);
}

int	*parse_input(int argc, char *argv[])
{
	int	status;

	if (argc < 2)
		return (NULL);
	else if (argc == 2)
	{
		stack_a = ft_split(argv[1]);
		status = fill_stack(stack_a, len(stack_a));
	}
	else if (argc > 2)
		status = fill_stack(stack_a);
	if (status == 1)
		return (NULL);
	return (stack_a);
}

int	main(int argc, char *argv[])
{
	int	stack_a[argc];

	stack_a = parse_input(argc, argv);
	if (stack_a == NULL)
		return (NULL);
	//stack_a = map(stack_a); //maps to [0,inf) continuously
	str = sort(stack_a, argc);
	//simplify(str); //Fuse sa+sb+ss , rr or rrr
	ft_printf(str);
	free(str);
	return ;
}
