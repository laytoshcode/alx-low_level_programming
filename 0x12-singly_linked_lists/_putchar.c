#include <unistd.h>
/**
 * putchar -writes the character c to stdout
 * @c: The character to print
 *
 * Return: on sucess 1.
 * on error,-1 is returned, and the errno is set appropriately
 * */
int_putchar(char c)
{
	return (write(1 ,&c, 1));
}