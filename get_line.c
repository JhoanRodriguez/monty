#include "monty.h"

/**
 * get_line - get a string from the stdin
 * Return: on success returne the number of characters read
 */
char *get_line(char *file)
{
	FILE *fptr;
	char *line = NULL, *aux = NULL;
	char **commands = NULL;
	unsigned int line_number = 1;
	size_t n = 0;
	stack_t **head = NULL;

	fptr = fopen(file, "r");
	if (fptr == NULL)
		return (NULL);
	
	if (!fptr)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file);
		return (NULL);
	}

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
	fclose(fptr);
	return (aux);
}