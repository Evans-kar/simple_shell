#include "shell.h"
/**
 * print_number - Prints numbers
 * @n: Print parameters
 * Return: null
 */
void print_number(int n)
{
	unsigned int j, count = 1;
	char a;
	unsigned int var1, num, var2, var3 = 1;

	var2 = n;
	num = var2;
	while (num > 9)
	{
		num = num / 10;
		count++;
		var3 = var3 * 10;
	}
	for (j = 1; j <= count; j++)
	{
		var1 = var2 / var3;
		var2 = var2 % var3;
		var3 = var3 / 10;
		a = '0' + var1;
		write(STDERR_FILENO, &a, 1);
	}
}
