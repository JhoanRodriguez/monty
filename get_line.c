#include "monty.h"

/**
 * get_line - get a string from the stdin
 * Return: on success returne the number of characters read
 */
char *get_line(FILE *fptr)
{
	char *line = NULL, *aux = NULL;
	char **commands = NULL;
	unsigned int line_number = 1;
	size_t n = 0;
	stack_t **head = NULL;

	if (getline(&line, &n, fptr) == EOF)
	{
		free(line);
		exit(0);
	}
	while (getline(&line, &n, fptr) != EOF)
	{
		aux = strdup(line);
		free(line);
		commands = split_line(aux);
		if (commands)
			checker(line_number, commands, head);

		line_number++;
		
	}
	return (aux);
}