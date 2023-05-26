#include "monty.h"

/**
 * line_check - checks if line is empty or if first
 * non-whitespace is the newline char
 * @tokens: an arry of pointers to strings
 *
 * Return: 1 if checks fail, 0 if checks true
 */

int line_check(char **tokens)
{
	if (tokens[0] == NULL)
	{
		free_grid(tokens);
		return (0);
	}
	return (1);
}
