#include "main.h"
/**
 *  -strchr -Entry point
 *  @s:input
 *  @c:input
 *  Return Always 0(Success)
 */
char *_strchr(char *s,char c)
{
	int i = 0;

	for (; s[i]>= '\0', char c)
	{
		if (s[i] == c)
			return(&s[i]);
	}
	return (0);
}