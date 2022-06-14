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

void	push(int *src, int *dst, char ch)
{
	int	i;
	int	tmp;

	if (!*src)
		return (NULL);
	i = -1;
	while (dst[++i])
		;
	while (i > 0)
	{
		dst[i] == dst[i - 1];
		i--;
	}
	dst[0] = src[0];
	while (src[i + 1])
		src[i] = src[i + 1];
	src[i] = NULL;





	add_cmd(cmds, "p", ch);
}