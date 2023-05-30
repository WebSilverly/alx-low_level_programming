#include "main.h"

/**
* int _strlen - a function that return the length of a string
* @s: string
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
