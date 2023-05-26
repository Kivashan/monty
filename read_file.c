#include "monty.h"

/**
 * read_file - opens files and reads a line at a time
 * @argv: pointer to argv[1]
 *
 * Return: integer value on success
 */

int read_file(char *argv)
{
	char *buffer = NULL;
	size_t buf_size;
	FILE *fs;
	int line = 0, retval;
	extern stack_t *stack;

	/* open file*/
	fs = fopen(argv, "r");
	if (!fs)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv);
		exit(EXIT_FAILURE);
	}

	/* read one line at a time from file*/
	while ((retval = getline(&buffer, &buf_size, fs)) != -1)
	{
		char **tokens = NULL;

		buffer[retval - 1] = '\0';	
		tokens = tokeniser(buffer);
		if (line_check(tokens) == 0)
			continue;
		retval = call_opcode(&stack, tokens, line);
		if (retval == 0)
			invalid_opcode(buffer, stack, tokens, line);
		line++;
		free_grid(tokens);
	}
	fclose(fs);
	free(buffer);
	free_dlist(stack);
	return (0);
}

/**
 * invalid_opcode - prints an error msg to stderr in case of invalid opcode
 * and frees memory
 * @buffer: line read from file
 * @stack: doubly linked list
 * @tokens: an array of pointers to strings containing the opcode instructions
 * @line: line number of file
 *
 * Return: void
 */

void invalid_opcode(char *buffer, stack_t *stack, char **tokens, int line)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", line, tokens[0]);
	free(buffer);
	free_dlist(stack);
	free_grid(tokens);
	exit(EXIT_FAILURE);
}
