#include "lists.h"

/**
* dlistint_len - count
* @h:head
* Return: no
*/

size_t dlistint_len(const dlistint_t *h)
{
size_t nodes = 0;

while (h)
{
nodes++;
h = h->next;
}

return (nodes);
}
