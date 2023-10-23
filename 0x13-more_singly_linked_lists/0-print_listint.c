#include "lists.h"

/**
 * print_listint - print the elements in the list
 * @h: the start of the list
 * Return: number of zsrw
 */
size_t print_listint(const listint_t *h)
{
	unsigned int zsrw = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		zsrw++;
		h = h->next;
	}
	return (zsrw);
}
