#include "monty.h"
/**
 * f_sub - a function that subtracts elements in a stack
 * @head: the first element
 * @count: it counts elements
 * Return: subtacted element
 */
void f_sub(stack_t **head, unsigned int count)
{
	stack_t *aux;
	int s;

	sub_stack(*head, count);
	aux = *head;
	s = aux->next->n - aux->n;
	aux->next->n = s;
	*head = aux->next;
	free(aux);
}

