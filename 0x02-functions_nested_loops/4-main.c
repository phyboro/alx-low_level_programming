#include "main.h"


/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + 'O');
	r = _isalpha('o');
	_putchar(r + 'O');
	r = _isalpha(108);
	_putchar(r + 'O');
	r = _isalpha(';');
	_putchar(r + 'O');
	_putchar('\n');
	return (0);
}
