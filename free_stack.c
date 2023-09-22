#include "monty.h"

/**
 * opfun_free_stack - frees a stack_t list
 * @stack: pointer to the top of the stack
 */
void opfun_free_stack(stack_t *stack)
{
	stack_t *current;

	while (stack != NULL)
	{
		current = stack;
		stack = stack->next;
		free(current);
	}
}
