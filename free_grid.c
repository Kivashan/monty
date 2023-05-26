#include "monty.h"

/**
 * free_grid - frees a 2d array
 * @tokens: 2d array
 *
 * Return: void
 */

void free_grid(char **tokens)
{
	int i = 0;

	while (tokens[i])
	{
		free(tokens[i]);
		i++;
	}
	free(tokens[i]);
	free(tokens);
}
