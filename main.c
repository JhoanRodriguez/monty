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
	FILE *fptr;

		if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	if (!fptr)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

    fptr = fopen(argv[1],"r");
    
	return (EXIT_SUCCESS);