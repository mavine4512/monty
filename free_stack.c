#include "monty.h"
/**
 * free_stack - frees a doubly linked list
 * @head: head of the stack
 */
void free_stack(stack_t *head)
{
	stack_t *aux;

	for (aux = head; aux != NULL; aux = aux->next)
	{
		free(head);
		head = aux->next;
	}
}

