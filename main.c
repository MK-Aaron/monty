#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

global gl = {NULL, NULL};
/**
 * main - Monty command interpreter
 * @ac: number of arguements
 * @av: arguements entered
 * Return: 0
 */

int main(int ac, char **av)
{
	FILE *ptr;
	char buffer[255];
	char *ext;
	int count = 1;
	stack_t *head = NULL;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	ext = strrchr(av[1], '.');/* Check file extension */
	if (ext == NULL || strcmp(ext, ".m") != 0)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	ptr = fopen(av[1], "r");
	if (ptr == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		return (EXIT_FAILURE);
	}

	while (fgets(buffer, sizeof(buffer), ptr))
	{
		gl.buff= strtok(buffer, " \t\n");
		gl.num = strtok(NULL, " \t\n");
		if (gl.buff != NULL)
			instruct(&head, count);
		count++;
	}
	fclose(ptr);
	return (0);
}
