#include "main.h"
/**
* print_diagonal - draws diagonal line
* @n: int
* Return: void
*/
void print_diagonal(int n)
{
int i, a;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
a = 0;
while (a < i)
{
_putchar(' ');
a++;
}
_putchar(92);
_putchar('\n');
}
}
}
