#include "main.h"
/**
 * -puts_recursionc-prints a string,followed by a new line.
 *  @s:The string to be printed 
 */
void _puts_recursion(char *s);
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursions(s + 1);
	}

	else
		_putchar('\n');
}