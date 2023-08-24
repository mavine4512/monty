#include "monty.h"
/**
 * f_pall - a program function that prints elements of a stack
 * @head: top element of stack
 * @count: counts number of elements
 * Return: printed stack
 */
void f_pall(stack_t **head, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *head;
	if (h == NULL)
	{
		return;
	}
	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
	}

}

