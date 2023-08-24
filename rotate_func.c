#include "monty.h"
/**
 * f_rot1 - a program function that rotates elements of the stack to the top
 * @head: top element of stack
 * @counter: counts elements of the stack
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *temp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;

	for (; temp->next != NULL; temp = temp->next)
	{
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = aux;

}

