#include "main.h"
/**
* *string_toupper - function that changes lower case to uppercase
* @str: string to be changed to uppercase
* Return: points to the changed string
*/
char *string_toupper(char *str)
{
int j = 0;

while (str[j])
{
if (str[j] >= 'a' && str[j] <= 'z')
str[j] -= 32;

j++;

return (str);
}
