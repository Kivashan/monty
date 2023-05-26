#include "monty.h"

/**
 * opcode_arg_atoi - checks if argument passed with opcode is an integer
 * @tokens: an array of pointer to strings(tokens)
 * @line_number: current line number being interpreted
 *
 * Return: 1 on success, exits program otherwise
 */

int opcode_arg_atoi(char **tokens, unsigned int line_number)
{
	value = atoi(tokens[1]);

	if (value == 0 && tokens[1][0] == '0')
	{
		fprintf(stderr, "L%d: usage: push integer", line_number);
		free_grid(tokens);
		exit(EXIT_FAILURE);
	}
	return (1);
}
