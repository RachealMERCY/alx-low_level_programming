#include "main.h"

/**
 * _puts - program prints a string to stdout.
 * @str: The string to be printed.
 * _putchar prints a new line
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}
