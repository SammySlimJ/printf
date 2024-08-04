#include "main.h"

/**
 * print_bin - prints binary number.
 * @val: parameter.
 * Return: integer
 */
int print_bin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int i;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int bit;

	for (i = 0; i < 32; i++)
	{
		bit = (num >> (31 - i)) & 1;
		if (bit || flag)
		{
			_putchar(bit + '0');
			flag = 1;
			cont++;
		}
	}
	if (cont == 0)
	{
		_putchar('0');
		cont++;
	}
	return (cont);
}
