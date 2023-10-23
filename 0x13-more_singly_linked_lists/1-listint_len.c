#include "lists.h"

/**
 * listint_len - count the elements in the list
 * @h: start point of the list
 * Return: number of zsrw
 */
size_t listint_len(const listint_t *h)
{
	unsigned int zsrw = 0;

	while (h != NULL)
	{
		zsrw++;
		h = h->next;
	}
	return (zsrw);
}
