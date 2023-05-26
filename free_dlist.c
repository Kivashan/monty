#include "monty.h"

/**
 * free_dlist - frees memory for a doubly linked list
 * @stack: first node in list
 *
 * Return: void
 */

void free_dlist(stack_t *stack)
{
	stack_t *temp = stack;

	while (temp)
	{
		temp = temp->next;
		free(stack);
		stack = temp;
	}
}
