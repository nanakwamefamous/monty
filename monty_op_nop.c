#include "monty.h"

/**
 * opfun_op_nop - does nothing
 * @stack: pointer to the top of the stack
 * @line_number: line number of the opcode
 **/
void opfun_op_nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
