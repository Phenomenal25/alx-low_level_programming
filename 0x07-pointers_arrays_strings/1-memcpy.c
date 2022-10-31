#include "main.h"
/**
* _memcpy - copies memory area
* @dest: pointer to memory area of destination
* @src: pointer to memory area to copy
* @n: number of byte
* Return: return pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
