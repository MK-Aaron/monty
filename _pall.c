#include <stdio.h>
#include "monty.h"

/**
 * _pall - prints all elements in a stack,
 * starting from thr top of the stack
 * @h: pointer to first node
 * @cnt: line count
 */
void _pall(stack_t **h, unsigned int cnt)
{
	stack_t *tmp = *h;

	(void)cnt;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
