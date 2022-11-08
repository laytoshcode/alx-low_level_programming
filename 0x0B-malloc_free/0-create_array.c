#include "main.h"
#include <stdlib.h>
/**
 *  * create_array - creates an array of chars.
 *   * @size: size of the array.
 *    * @c: storaged char
 *     *
 *      * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
char *array = malloc(size);
if (size == 0 || array == 0)
return (NULL);
while (size--)
array[size] = c;
return (array);
}
