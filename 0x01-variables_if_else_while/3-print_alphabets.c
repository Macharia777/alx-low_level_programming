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
	char a;
	char b;
	/* your code goes there */
	for (a = 'a'; a <= 'z'; a++)
	putchar(a);
	for (b = 'A'; b <= 'Z'; b++)
	putchar(b);
	putchar('\n');
	return (0);
}

