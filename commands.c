#include "monty.h"
/**
 * get_op_func - Select the correct operation function asked by the user
 * @opcode: Operation code
 *
 * Return: Function pointer to operator given
 *
 */
void (*get_commands(char *opcode, unsigned int line_number))(stack_t **stack, unsigned int)
{
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};
	unsigned int x = 0;
	while (ops[x].opcode != NULL)
	{
		if (strcmp(ops[x].opcode, opcode) == 0)
				return (ops[x].f);
		x++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}