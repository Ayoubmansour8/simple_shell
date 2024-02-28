#include "main.h"

/**
 * custom_hello - Prints a custom hello message
 *
 * This function prints "Hello, world!" to the standard output.
 *
 * Return: Always 0 (Success)
 */
int custom_hello(void)
{
	const char message[] = "Hello, world!\n";

	write(1, message, sizeof(message) - 1);
	return (0);
}
