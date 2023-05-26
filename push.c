#include "monty.h"

/**
 * push - adds a node to a doubly linked list
 * @stack: position to add new node(based on stack or queue)
 * @line_number: current line being read from monty bytecode file(for error
 * handling purposes
 *
 * Return: void
 */

void push(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *new, *temp;

	new = malloc(sizeof(stack_t));
	if (!new)
	{
		write(2, "Error: malloc failed\n", 21);/* free memory here*/
		exit(EXIT_FAILURE); /*change error message*/
	}

	new->n = value;

	if (*stack == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
	}
	else
	{
		temp = *stack;
		new->next = *stack;
		new->prev = NULL;
		temp->prev = new;
	}
	*stack = new;
}
