#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_list - function prints all the elements of a linked list
 * @h: pointer of type list_t to head node of linked list
 *
 * Return: unsigned int (number of nodes)
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *ptr;

	if (h == NULL)
	{
		return (1);
	}
	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str != NULL)
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		else
			printf("[%d] %s\n", 0, ptr->str);
		ptr = ptr->next;
		i++;
	}
	return (i);
}