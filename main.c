/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 11:23:24 by jleroux           #+#    #+#             */
/*   Updated: 2022/06/08 11:32:13 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int[]	parse_input()
{
	if (contain_space())
		ft_split();
}

int	main(int argc, char *argv[])
{
	int[]	stack_a;

	stack_a = parse_input(argc, argv);
	str = sort(stack_a);
	push();
	ft_printf(str);
	free(str);
	return ;
}
