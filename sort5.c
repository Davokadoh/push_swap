char*	sort_5(int *stack_a, char *cmds)
{
    int *stack_b;
    
	if (!is_sorted(stack_a))
	{
		push(cmds, stack_a, stack_b);
		push(cmds, stack_a, stack_b);
		sort_3(stack_a, cmds);
		while (stack_b[0])
		{
			smart_push(stack_b[0], stack_a);
			push(cmds, stack_b, stack_a);
		}
	}
	return (cmds);
}