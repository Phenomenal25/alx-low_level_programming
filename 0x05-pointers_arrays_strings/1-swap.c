#include "main.h"

/**
* swap_int - swap values of two integers
* @a: pointer to an integer
* @b: pointer to an integer
*/
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
