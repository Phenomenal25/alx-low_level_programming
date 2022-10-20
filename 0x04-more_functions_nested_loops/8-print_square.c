#include "main.h"
/**
* print_square - prints a square
* @size: int
* Return: void
*/
void print_square(int size)
{
int i, a;
if (size <= 0)
{
_putchar('\n');
}
a = 1;
while (a <= size)
{
for (i = 1; i <= size; i++)
{
_putchar(35);
}
_putchar('\n');
a++;
}
}
