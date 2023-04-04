#include "lists.h"

/**
  * print_listint - prints all elements of a list
  *
  * Return: size_t of the list
  */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}


