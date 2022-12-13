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
	char n;
	/* your code goes there */
	n = 'a';
while (n <= 'z')
{
if ((n != 'q' && n != 'e') && n <= 'z')
putchar(n);
n++;
}
putchar('\n');
	return (0);
}
