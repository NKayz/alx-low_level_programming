#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints reversed string using recursion
 *
 * @s: string to print
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
