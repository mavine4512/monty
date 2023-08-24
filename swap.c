#include "monty.h"
/**
 * f_swap - a program function that swaps top most elements of a stack
 * @head: top most element
 * @count: it counts lines
 * Return: swapped top elements
 */
void f_swap(stack_t **head, unsigned int count)
{
	int temp, len = 0;
	stack_t *h;

	for (h = *head; h; len++)
	{
		h = h->next;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, the stack is not  long enough\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	temp = h->n;
	h->n = h->next->n;
	h->next->n = temp;
}

