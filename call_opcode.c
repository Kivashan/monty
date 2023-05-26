#include "monty.h"

/**
 * call_opcode - traverses opcodes_arr and if match is found call the
 * relevant opcode function
 * @stack: address of head or tail node(if stack or queue)
 * @tokens: tokenised line from bytecode file
 * @line_number: line number read from bytecode file
 *
 * Return: 1 on successful call to an opcode function, 0 if invalid opcode
 */

int call_opcode(stack_t **stack, char **tokens, unsigned int line_number)
{
	int i = 0;
	instruction_t opcodes_arr[] = {
					{"push", push}, {"pall", pall}, {NULL, NULL}
					};

	while (opcodes_arr[i].opcode)
	{
		if (strcmp(tokens[0], (opcodes_arr[i]).opcode) == 0)
		{
			/* checks if push opcode was provided and if arg passed was an integer */
			if (strcmp(tokens[0], (opcodes_arr[0]).opcode) == 0)
				/* sets global variable defined in main.h for later use by opcode func*/
				opcode_arg_atoi(tokens, line_number);

			(opcodes_arr[i]).f(stack, line_number);
			return (1);
		}
		i++;
	}
	return (0);
}

