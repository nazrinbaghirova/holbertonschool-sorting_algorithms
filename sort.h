/**
 * struct listint_s - Doubly linked list node
 * @n: integer stored in the node
 * @prev: points to the previous node
 * @next: points to the next node
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
