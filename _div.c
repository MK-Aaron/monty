#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * _div - swap top two elements on the stack
 * @h: pointer to head
 * @cnt: line count
 */
void _div(stack_t **h, unsigned int cnt)
{
	stack_t *tmp = *h;
	int num, len = 0;

	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", cnt);
		exit(EXIT_FAILURE);
	}

	if ((*h)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", cnt);
		exit(EXIT_FAILURE);
	}
	num = (*h)->next->n / (*h)->n;
	(*h)->next->n = num;
	free(*h);
	*h = (*h)->next;
	(*h)->prev = NULL;
}
