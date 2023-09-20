#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * _push - pushes an element to the stack
 * @h: pointer to the head of the stack
 * @cnt: line count;
 */
void _push(stack_t **h, unsigned int cnt)
{
	stack_t *new;
	int stacknum;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	if (gl.num == NULL && gl.num != 0)
	{
		fprintf(stderr, "L%u: usage: push integer\n", cnt);
		free(new);
		_free(*h);
		exit(EXIT_FAILURE);
	}
	else
	{
		stacknum = atoi(gl.num);
		new->n = stacknum;
		new->next = *h;
		new->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
	}
}
