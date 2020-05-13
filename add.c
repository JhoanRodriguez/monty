#include "monty.h"
/**
 *add - adds the top two values of the stack
 *@stack: pointer to the top of the stack
 *@line_number: the line number of the command being run
 *
 *Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int sum;
	int nodes = 0;

    if (temp == NULL || temp->next == NULL)
    {
        printf("L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
    }

    while (temp->next != NULL)
	{
		temp = temp->next;
	}
	
	sum = temp->n + temp->prev->n;
	temp->prev->n = sum;
    temp->prev->next = NULL;

	free(temp);
}

