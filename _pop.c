#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * _pop - removes the top element of the stack
 * @h: pointer to head of a list
 * @cnt: line count
 */
void _pop(stack_t **h, unsigned int cnt)
{
	stack_t *tmp = *h;

	if (h == NULL || *h == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", cnt);
		exit(EXIT_FAILURE);
	}

	*h = tmp->next;
	if (tmp->next)
		tmp->next->prev = NULL;
	free(tmp);
}
