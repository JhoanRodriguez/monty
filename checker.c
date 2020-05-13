#include "monty.h"
/**
 * get_op_func_wrapper - Function that verifies if the command and the
 * arguments are valid, if so it returns the integer of push converted.
 * @stack:
 * @line_number:
 * @commands:
 *
 * Return: Integer of commands converted if success and EXIT_FAILURE
 * if the number doesn't exist and returns 1 if is another function
 */
int checker(unsigned int line_number, char **commands, stack_t **stack)
{
    

	if (commands[1])
        glob_vars.glob_int = atoi(commands[1]);

    else
    {
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
        return (EXIT_FAILURE);
    }
    get_commands(commands[0])(stack, line_number);
	return (0);
}