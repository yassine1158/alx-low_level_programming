#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to the string
 * Return: void
*/

void _puts_recursions(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
