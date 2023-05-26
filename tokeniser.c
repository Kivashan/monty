#include "monty.h"

int no_of_args(char *line);

/**
 * tokeniser - takes a string and tokenisers it
 * @line: given string to tokenise
 *
 * Return: an array of pointers to strings
 */

char **tokeniser(char *line)
{
	char **tokens = NULL;
	char *temp = strdup(line);
	int args = no_of_args(line), i = 0;
	char *temp2;

	tokens = malloc(sizeof(char *) * (args + 1));
	if (!tokens)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	temp2 = strtok(temp, " ");

	while(temp2)
	{
		tokens[i] = strdup(temp2);
		temp2 = strtok(NULL, " ");
		i++;
	}
	tokens[i] = NULL;
	free(temp);
	free(temp2);
	return (tokens);
}

/**
 * no_of_args - returns the number of tokens in a string
 * @line: given string to be tokenised
 *
 * Return: the number of tokens
 */

int no_of_args(char *line)
{
	char *temp = strdup(line);
	char *temp2 = NULL;
	int args = 0;

	temp2 = strtok(temp, " ");
	args++;

	while (temp2)
	{
		temp2 = strtok(NULL, " ");
		args++;
	}
	free (temp);
	free (temp2);
	return (args);
}	
