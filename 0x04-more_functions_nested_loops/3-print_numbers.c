#include "main.h"
#include <stdio.h>
/**
* print_numbers - prints 0123456789
* Return: void
*/
void print_numbers(void)
{
char i;
for (i = '0'; i <= '9'; i++)
{
_putchar(i);
}
_putchar('\n');
}
