#include "main.h"

/**
 * print_unsigned - Print a unsigned int
 * @l: Number to print
 *
 * Return: Length of the number
 **/
int print_unsigned(va_list l, flags_t *f)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(l, unsigned int), 10);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
