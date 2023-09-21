#include <stdio.h>
#include "monty.h"

/**
 * if_digit - check if string is a number
 * @str: string to check
 * Return: 0 if true 1 if false
 */

int if_digit(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}
