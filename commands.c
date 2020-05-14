#include "monty.h"
/**
 * _commands - Select the correct operation function asked by the user
 * @opcode: operation code
 * @ln: Number of readed line
 * Return: Function pointer to operator given
 *
 */
void (*_commands(char *opcode, unsigned int ln))(stack_t **stack, unsigned int)
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
	fprintf(stderr, "L%d: unknown instruction %s\n", ln, opcode);
	exit(EXIT_FAILURE);
}
