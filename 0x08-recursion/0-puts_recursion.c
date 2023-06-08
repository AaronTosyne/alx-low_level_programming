#include "main.h"
/**
 * _puts_recursioon: A function that print a string
 * followed by a newline.
 * *s: The pointer pointing to the string
 *
 * Return 0 when succesful
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

