#include "main.h"

/**
* _strlen - A function that returns the length of a string.
* @s: string
* Return: length
*/
int _strlen(char *s)
{
int lengthstr = 0;
while (*s != '\0')
{
lengthstr++;
s++;
}
return (lengthstr);
}
