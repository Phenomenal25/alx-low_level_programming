#include "main.h"

/**
* _strcpy - Copy string
* @dest: Destination which the string will be copied
* @src: the string to copy
*
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}

dest[i++] = '\0';

return (dest);
}
