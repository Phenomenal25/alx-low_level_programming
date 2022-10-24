#include "main.h"

/**
* _atoi - Convert a string to an integer.
* @s: The string to convert
*
* Return: conversion result
*/
int _atoi(char *s)
{
int i = 0;
unsigned int n = 0;
int sign = 1;
int flag = 0;

while (s[i])
{
if (s[i] == 45)
{
sign *= -1;
}

else
{
while (s[i] >= 48 && s[i] <= 57)
{
flag = 1;
n = (n * 10) + (s[i] - '0');
i++;
}
}

if (flag == 1)
{
break;
}

i++;
}

n *= sign;
return (n);
}
