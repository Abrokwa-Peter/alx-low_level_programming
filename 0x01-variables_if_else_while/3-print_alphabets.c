#include <stdio.h>
/**
 * main Entry point
 * Description: print the alphabet in lower case
 * and the in uppercase, follow by a new line
 *
 * Return: always returns 0
 *
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
	putchar(a);
	putchar('\n');
	return (0);
}
