#include "shell.h"

/**
 * bfree - frees pointer and NULLs  addres
 * @ptr: address pointer
 *
 * Return: 1 freed, otherwise 0
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
