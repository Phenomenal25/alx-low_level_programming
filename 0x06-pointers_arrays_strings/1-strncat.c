#include <stdio.h>
#include "main.h"
/**
* *_strncat - function that concatenates two strings
* @dest: string to be concatenated
* @src: destination for concatenated string
* @n: condition for termination
* Return: return dest
*/
char *_strncat(char *dest, char *src, int n)
{
int length, j;
length = 0;
while (dest[length] != '\0')
{
++length;
}
for (j = 0; src[j] != '\0' && j < n; ++j, ++length)
{
dest[length] = src[j];
}
return (dest);
}
