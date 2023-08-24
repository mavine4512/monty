#include "monty.h"
/**
 * f_pop - a program function that deletes an element
 * from stack
 * @head: top element of a stack
 * @count: counts elements of stack
 * Return: top element
 */
void f_pop(stack_t **head, unsigned int count)
{
	stack_t *x;

	if (*head == NULL)
		pop_exit(count, head);
	x = *head;
	*head = x->next;
	free(x);
}

