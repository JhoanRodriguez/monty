#include "monty.h"
/**
 * get_op_func - Select the correct operation function asked by the user
 * @opcode: Operation code
 *
 * Return: Function pointer to operator given
 *
 */
void (*get_commands(char *opcode))(stack_t **stack, unsigned int)
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
	while (x < (sizeof(ops) / sizeof(ops[0])))
	{
		if (strcmp(ops[x].opcode, opcode) == 0)
				return (ops[x].f);
				
		x++;
	}
	return (0);
}