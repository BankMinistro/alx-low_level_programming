#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list cd;
	unsigned int o, sum = 0;

	va_start(cd, n);

	for (o = 0; o < n; o++)
		sum += va_arg(cd, int);
	va_end(cd);
	return (sum);

}
