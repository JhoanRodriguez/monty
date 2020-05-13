#include "monty.h"
/**
 * main - Entry Point
 * @argc: Arguments count
 * @argv: Array with actual arguments
 * Description: Entry Point
 * Return: EXIT_SUCCESS on success and EXIT_FAILURE otherwise
 */
int main(int argc, char *argv[])
{
	char *line = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	line = get_line(argv[1]);
	if (!line)
		return EXIT_FAILURE;

	return (EXIT_SUCCESS);
}