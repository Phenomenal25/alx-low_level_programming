#include "main.h"
/**
* more_numbers - prints zero to fourteen ten times
* Return: void
*/
void more_numbers(void)
{
int i, a;
i = 1;
while (i < 11)
{
for (a = 0; a <= 14; a++)
{
if (a >= 10)
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
}
_putchar('\n');
i++;
}
}
