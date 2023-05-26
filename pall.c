#include "monty.h"

/**
 * pall - prints data stored in list
 * @stack: a doubly linked list
 * @line_number: line number of file
 *
 * Return: void
 */

void pall(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *temp = *stack;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
