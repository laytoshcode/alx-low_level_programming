#include "main.h"
/**
 *print_most_numbers -prints
 *
 *Return :void
 */
void print _most_numbers(void)
{
int a = 0;
while (a < 10)
{
if (a != 2 && a != 4)
_putchar(a + '0')
a++;
}
_putchar('\n');
}
