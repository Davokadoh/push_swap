/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 11:23:24 by jleroux           #+#    #+#             */
/*   Updated: 2022/06/08 13:17:11 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int[]	parse_input()
{
	int[argc]	stack_a;

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
	int[]	stack_a;

	stack_a = parse_input(argc, argv);
	if (stack_a == NULL)
		return (NULL);
	str = sort(stack_a);
	ft_printf(str);
	free(str);
	return ;
}
