#include "monty.h"

/**
 * add_f - adds the top two elements of the stack.
 * @head: stack head
 * @count: line number
 */
void add_f(stack_t **head, unsigned int count)
{
	stack_t *h;
	int length = 0, aux;

	for (h = *head; h; h = h->next)
	{
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: cant't add, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}

