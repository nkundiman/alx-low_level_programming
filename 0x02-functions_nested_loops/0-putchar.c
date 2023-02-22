#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * main - Entry point
 * Return:0
 */
int _putchar(char c)

int main(void)
{
char c[9] = "_putchar";
int i = 0;
while (i < 8)
{
	return (write(1, &c, 1));
_putchar(c[i]);
i++;
}
_putchar('\n');
return (0);
}

