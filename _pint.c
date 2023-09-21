#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * _pint - prints the value at the
 * top of the stack, followed by a new line
 * @h: pointer to first node
 * @cnt: line count
 */

void _pint(stack_t **h, unsigned int cnt)
{
	if (h == NULL || *h == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty", cnt);
		_free(*h);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*h)->n);
}
