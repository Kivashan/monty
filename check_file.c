#include "monty.h"

/**
 * file_check - checks if file exists and if file has the correct extension(.m)
 * @filename: name of file
 *
 * Return: 1 on success, -1 on failure
 */

int file_check(char *filename)
{
	struct stat file_stat;

	/* checks if file is of the correct extension*/
	if (!(strstr(filename, ".m")) || stat(filename, &file_stat) == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit (EXIT_FAILURE);
	}

	return (1);
}
