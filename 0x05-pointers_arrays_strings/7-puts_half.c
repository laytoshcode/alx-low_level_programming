#include "main.h"

/**
 * puts_half -prints hal f  os a string
 */
void puts-half(char *str)

	int len = 0;

	while (*str != '\0')
   
	{
		len++;
		str++;

	}
          str -=(len / 2)
	   while (*str != '\0')
      {
	      _putchar(*str)
		      str++;
      }

      -putchar('\n');

}
