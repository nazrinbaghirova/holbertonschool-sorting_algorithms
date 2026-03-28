#include "sort.h"

/**
 * swap_nodes - swaps a node with its previous node
 * @list: pointer to head of list
 * @node1: pointer to previous node
 * @node2: pointer to current node
 */
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	node1->next = node2->next;
	if (node2->next != NULL)
		node2->next->prev = node1;

	node2->prev = node1->prev;
	node2->next = node1;

	if (node1->prev != NULL)
		node1->prev->next = node2;
	else
		*list = node2;

	node1->prev = node2;
}

/**
 * insertion_sort_list - sorts a doubly linked list using insertion sort
 * @list: pointer to head of list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *insert;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		insert = current;
		current = current->next;

		while (insert->prev != NULL && insert->n < insert->prev->n)
		{
			swap_nodes(list, insert->prev, insert);
			print_list(*list);
		}
	}
}

