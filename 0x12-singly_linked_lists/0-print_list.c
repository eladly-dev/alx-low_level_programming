#include "lists.h"

/**
 * print_list - prints a give linked list's elements and returns the number of
 * nodes there.
 * @h: a pointer to the header of th linked list.
 *
 * Return: the number of nodes.
 **/
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
