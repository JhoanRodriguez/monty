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
	char *read;
	
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	read = get_line(argv[1]);
	free (read);

	return (EXIT_SUCCESS);
}