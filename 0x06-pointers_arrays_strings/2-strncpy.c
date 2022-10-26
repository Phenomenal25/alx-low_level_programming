#include <stdio.h>
#include "main.h"
/**
* *_strncpy - function that copies a string
* @dest: string to be copied
* @src: copied string destination
* @n: condition at which string is copied
* Return: return dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int j, length;

length = 0;
j = 0;

while (src[j++])
{
length++;
}
for (j = 0; src[j] && j < n; j++)
{
dest[j] = src[j];
}
for (j = length; j < n; j++)
{
dest[j] = '\0';
}
return (dest);
}
