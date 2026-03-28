#include "sort.h"

/**
 * print_list - prints a list of integers
 * @list: pointer to first node
 */
void print_list(const listint_t *list)
{
	int first = 1;

	while (list != NULL)
	{
		if (!first)
			printf(", ");
		printf("%d", list->n);
		first = 0;
		list = list->next;
	}
	printf("\n");
}

