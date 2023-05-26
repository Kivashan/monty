#include "monty.h"

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
