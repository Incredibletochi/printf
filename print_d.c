#include "main.h"
#include <stdlib.h>

/**
 * print_d - A function that prints a decimal base 10
 * @i: base 10 integer to print
 * Return: number of printed digits
 */
int print_d(va_list i)
{
<<<<<<< HEAD
int a[10];
int j = 1, m = 1000000000, n, sum = 0, counter = 0;

n = va_arg(i, int);
if (n < 0)
{
n *= -1;
_putchar('-');
counter++;
}
a[0] = n / m;

for (; j < 10; j++)
{
m /= 10;
a[j] = (n / m) % 10;
}
for (j = 0; j < 10; j++)
{
sum += a[j];
if (sum != 0 || j == 9)
{
_putchar('0' + a[j]);
counter++;
}
}
return (counter);
=======
	int a[10];
	int j = 1, m = 1000000000, n, sum = 0, counter = 0;

	n = va_arg(i, int);
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		counter++;
	}
	a[0] = n / m;

	for (; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}
	for (j = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
>>>>>>> 8b715443d907b84ed1113fc5e56b09a618bcc42a
}
