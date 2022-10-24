#include "main.h"
#include <stdio.h>

/**
* print_array - Prints elements of an array of integers
* @a: the beginning of an array of integers
* @n: the total number of array elements to print
*
* Return: void
*/
void print_array(int *a, int n)
{

int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);

if (i != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
