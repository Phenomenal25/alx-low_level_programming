#include <stdio.h>
/**
* main - finds and prints the sum of the even-valued terms
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long int a, b, next, sum;
a = 0;
b = 1;
sum = 0;
next = 0;
while (next < 4000000)
{
next = a + b;
a = b;
b = next;
if (next % 2 == 0)
{
sum += next;
}
}
printf("%lu\n", sum);
return (0);
}
