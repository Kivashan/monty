#include "monty.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: an array of pointers to strings, holding each argument
 *
 * Return: void
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(2, "Usage: monty file\n", 18);
		exit(EXIT_FAILURE);
	}

	/* checks if file exists or if program can access file*/
	if (file_check(argv[1]) == 1)
	{
		read_file(argv[1]);
	}

	return (0);
}
