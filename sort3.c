char*	sort_3(int *stack_a, char *cmds)
{
	while (!is_sorted(stack_a))
	{
		if (stack_a[0] == stack_a[1] + 1)
			swap(cmds, stack_a, a);
		else if (stack_a[0] == 3 && stack_a[1] == 1)
			rot(cmds, stack_a);
		else
			rrot(cmds, stack_a);
	}
	return (cmds);
}