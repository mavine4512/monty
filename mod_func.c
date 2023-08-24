#include "monty.h"

/**
 * mod_f - computes rest of division of the second
 * top element of the stack by the top element of the stack
 * @head: head of stack
 * @count: line_number
 */
void mod_f(stack_t **head, unsigned int count)
{
	stack_t *h;
	int length = 0, aux;

	for (h = *head; h; h = h->next)
	{
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", count);
		mod_error(count, head);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		mod_error(count, head);
	}
	aux = h->next->n % h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}

