#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * instruct - select opcode to be used
 * @head: pointer
 * @cnt: count
 */

void instruct(stack_t **head, int cnt)
{
	int i = 0;

	instruction_t op[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{NULL, NULL}
	};

	while (op[i].opcode)
	{
		if (strcmp(op[i].opcode, gl.buff) == 0)
		{
			op[i].f(head, cnt);
			break;
		}
		i++;
	}

	if (op[i].f == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", cnt, gl.buff);
		_free(*head);
		exit(EXIT_FAILURE);
	}
}
