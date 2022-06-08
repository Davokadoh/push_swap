/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 11:23:24 by jleroux           #+#    #+#             */
/*   Updated: 2022/06/08 14:06:55 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_sorted(t_stack stack)
{
	int	i;

	i = -1;
	while (++i < max - 1)
		if (stack[i] > stack[i + 1])
			return (0);
	return (1);
}

char*	sort_5(t_stack stack_a)
{
	char*	cmds;

	if (!is_sorted(stack_a))
	{
		add_cmd(cmds, pb);
		add_cmd(cmds, pb);
		sort_3(stack_a, cmds);

	}
	return (cmds);
}

char*	sort_3(t_stack stack_a, char *cmds)
{
	while (!is_sorted(stack_a))
	{
		if (stack_a[0] == stack_a[1] + 1)
			add_cmd(cmds, sa);
		else if (stack_a[0] == 3 && stack_a[2] == 1)
			add_cmd(cmds, ra);
		else
			add_cmd(cmds, rra);
	}
	return (cmds);
}

char*	sort(stack_a, argc)
{
	char*	cmds;

	if (size <= 3)
		return (sort_3(stack_a));
	else if (size <= 5)
		return (sort_5());
	else if (size <= 10)
		return (sort_10());
	else if (size <= 100)
		return (sort_100());
	else 
		return (sort_500());
}

int[]	parse_input()
{
	if (argc < 2)
		return (NULL);
	else if (argc == 2 && contain_space(argv[1]))
		fill_stack(ft_split(argv[1]));
	else if (argc > 2)
		fill_stack(stack_a);
	if (stack_a == NULL)
		return (NULL);
	return (stack_a);
}

void	fill_stack(t_stack stack_a, int argc, char** argv)
{
	i = 0;
	while (i < argc)
		if (!is_int(argv[i + 1]))
			return (NULL);
	while (i < argc)
		stack_a[i] == ft_atoi(argv[i + 1]);
	i = 0;
	j = 0;
	while (i < argc)
		if (stack_a[i] == stack_a[j])
			return (NULL);
}

int	main(int argc, char *argv[])
{
	int[argc]	stack_a;

	stack_a = parse_input(argc, argv);
	if (stack_a == NULL)
		return (NULL);
	str = sort(stack_a, argc);
	ft_printf(str);
	free(str);
	return ;
}
