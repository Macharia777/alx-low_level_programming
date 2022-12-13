#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - Entry point
*
*Return: Always 0 (success)
*/
int main(void)
{
char d;
/* your code goes there */
for (d = 'z'; d >= 'a'; d--)
putchar(d);
putchar('\n');
return (0);
}
