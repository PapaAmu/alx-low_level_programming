#include "lists.h"

/**
 * print_listint - prints all the elements of linked list
 * @lst: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *lst)
{
	size_t num = 0;

	while (lst)
	{
		printf("%d\n", lst->n);
		num++;
		lst = lst->next;
	}

	return (num);
}
