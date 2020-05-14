#include "monty.h"

int is_number(char *commands)
{
	if (!commands)
		return (0);
	while (*commands != '\0')
	{
		if (!isdigit(*commands))
			return (0);
		commands++;
	}
	return (1);
}