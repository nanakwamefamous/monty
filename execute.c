#include "monty.h"

/**
 * opfun_execute_file - reads and executes opcodes from a file
 * @stack: pointer to the top of the stack
 */
void opfun_execute_file(stack_t **stack)
{
	char *opcode = NULL;
	size_t len = 0;
	ssize_t nread;
	unsigned int line_number = 0;

	while ((nread = getline(&glob.line, &len, glob.file)) != -1)
	{
		line_number++;
		opcode = strtok(glob.line, " \t\r\n\a");
		glob.arg = strtok(NULL, " \n\t");
		if (opcode == NULL || *opcode == '#')
			continue;
		opfun_execute_opcode(opcode, stack, line_number);
	}
}

/**
 * opfun_execute_opcode - executes a single opcode
 * @opcode: opcode to execute
 * @stack: pointer to the top of the stack
 * @line_number: line number of the opcode
 */
void opfun_execute_opcode(char *opcode, stack_t **stack, unsigned int line_number)
{
	instruction_t instructions[] = {
		{"push", opfun_op_push},
		{"pall", opfun_op_pall},
		{"pint", opfun_op_pint},
		{"pop", opfun_op_pop},
		{"swap", opfun_op_swap},
		{"nop", opfun_op_nop},
		{"add", opfun_op_add},
		{"sub", opfun_op_sub},
		{"div", opfun_op_div},
		{"mul", opfun_op_mul},
		{"mod", opfun_op_mod},
		{"pchar", opfun_op_pchar},
		{"pstr", opfun_op_pstr},
		{NULL, NULL}
	};
	int i;

	for (i = 0; instructions[i].opcode != NULL; i++)
	{
		if (strcmp(opcode, instructions[i].opcode) == 0)
		{
			instructions[i].f(stack, line_number);
			return;
		}
	}

	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
	opfun_free_stack(*stack);
	fclose(glob.file);
	free(glob.line);
	exit(EXIT_FAILURE);
}
