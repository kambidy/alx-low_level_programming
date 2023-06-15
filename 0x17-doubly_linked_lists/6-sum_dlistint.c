#include "lists.h"

/**
* sum_dlistint - sums data
* @head: head
* Return:sum of all data
*/

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}

return (sum);
}
