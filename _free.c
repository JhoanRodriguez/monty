#include "monty.h"

/**
 * _free - free allocated memory
 * @args: argument to free
 */
void _free(stack_t *head)
{
	stack_t *tmp;

	if (head == NULL)
		return;
	
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}