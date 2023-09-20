#include <stdlib.h>
#include "monty.h"

/**
 * _free - free's a list
 * @h: pointer
 */
void _free(stack_t *h)
{
	if (h != NULL)
	{
		_free(h->next);
		free(h);
	}
}
