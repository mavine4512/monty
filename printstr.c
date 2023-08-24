#include "monty.h"
/**
 * f_pstr - a program function that prints strings from top of
 * stack
 * @head: top element of stack
 * @count: counts elements in a stack
 */
void f_pstr(stack_t **head, unsigned int count)
{
	stack_t *h;
	(void)count;

	for (h = *head; h; h = h->next)
	{
		if (h->n > 127 || h->n <= 0)
			break;
		printf("%c", h->n);
	}
	printf("\n");
}

