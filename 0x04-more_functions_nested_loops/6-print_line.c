#include "main.h"
/**
* print_line - draws straight line
* @n: int
* Return: 0
*/
void print_line(int n)
{
int i;
for (i = 1; i <= n; i++)
{
if (i <= 0)
{
_putchar('\n');
}
else
_putchar('_');
}
_putchar('\n');
}
