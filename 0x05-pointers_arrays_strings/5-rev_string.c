#include "main.h"

/**
* rev_string -> reversing a string
* @s: the string to reverse
*/
void rev_string(char *s)
{
char c;
int a, lengthA, lengthB;

lengthA = 0;
lengthB = 0;

while (s[lengthA] != '\0')
lengthA++;

lengthB = lengthA - 1;
for (a = 0; a < lengthA / 2; a++)
{
c = s[a];
s[a] = s[lengthB];
s[lengthB] = c;
lengthB -= 1;
}
}
