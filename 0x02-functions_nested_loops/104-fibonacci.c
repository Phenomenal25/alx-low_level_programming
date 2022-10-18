#include <stdio.h>
/**
* main - finds and prints the first 98 Fibonacci numbers,
* starting with 1 and 2
* followed by a new line
* Return: ALways 0 (Success)
*/
int main(void)
{
unsigned long int i, j, k, l, j1, j2, k1, k2;
j = 1;
k = 2;
l = 1000000000;
printf("%lu", j);
for (i = 1; i < 91; i++)
{
printf(", %lu", k);
k += j;
j = k - j;
}
j1 = j / l;
j2 = j % l;
k1 = k / l;
k2 = k % l;
for (i = 92; i < 99; ++i)
{
printf(", %lu", k1 + (k2 / l));
printf("%lu", k2 % l);
k1 = k1 + j1;
j1 = k1 - j1;
k2 = k2 + j2;
j2 = k2 - j2;
}
printf("\n");
return (0);
}
