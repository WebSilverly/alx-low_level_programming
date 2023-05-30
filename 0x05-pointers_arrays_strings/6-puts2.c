#include "main.h"

/**
* void puts2(char *str) - a function that prints every other character,
*followed by a new line.
*@str: input
* Return: print
*/

void puts2(char *str)
{
int longstr = 0;
int t = 0;
char *y = str;
int o;

while (*y != '\0')
{
y++;
longstr++;
}
t = longstr - 1;
for (o = 0; o <= t; o++)
{
if (o % 2 == 0)
{
_putchar(str[o]);
}
}
_putchar('\n');
}
