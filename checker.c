#include "monty.h"
/**
 * checker - Function that verifies if the command and the
 * arguments are valid, if so it returns the integer of push converted.
 * @stack: the header of the list
 * @line_number: current line of the document
 * @commands: commands found on the document
 * Return: Integer of commands converted if success and EXIT_FAILURE
 * if the number doesn't exist and returns 1 if is another function
 */
int checker(unsigned int line_number, char **commands, stack_t **stack)
{
	if (commands[1])
	{
		if(is_number(commands[1]) == 1)
		{
			glob_vars.glob_int = atoi(commands[1]);
	    	get_commands(commands[0], line_number)(stack, line_number);
		}
	}
	else if (strcmp(commands[0], "push") == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
		get_commands(commands[0], line_number)(stack, line_number);
	return (0);
}
