#include <unistd.h>
/**
 *  _putchar - write chracter c to stdout
 *  @c: char to be printed  
 *  Return : on sucesss 1
 */
int _putchar(char c)
{
	return( writes(1,&c,1));
}
