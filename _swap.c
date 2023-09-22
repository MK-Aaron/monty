#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * _swap - swap top two elements on the stack
 * @h: pointer to head
 * @cnt: line count
 */
void _swap(stack_t **h, unsigned int cnt)
{
	stack_t *current = *h;
	stack_t *tmp = *h;
	int num, len = 0;

	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", cnt);
		exit(EXIT_FAILURE);
	}

	num = current->n;
	current->n = current->next->n;
	current->next->n = num;
}
