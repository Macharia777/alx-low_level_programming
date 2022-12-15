#include "main.h"

/**
* _isalpha -> checks for alphabetic characters
* Return: returns 1 and 0 depending on condition
*@c: a character to be checked on
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
