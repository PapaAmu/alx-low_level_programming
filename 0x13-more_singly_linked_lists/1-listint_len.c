#include "lists.h"

/**
* listint_len - returns the number of elements in a linked lists
* @lst: linked list of type listint_t to traverse
*
* Return: number of nodes
*/
size_t listint_len(const listint_t *lst)
{
	size_t num = 0;

	while (lst)
	{
		num++;
		lst = lst->next;
	}

	return (num);
}
