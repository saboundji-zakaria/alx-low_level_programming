#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head) {
  if (head == NULL) {
    return;
  }

  free_listint(head->next);
  free(head);
}
