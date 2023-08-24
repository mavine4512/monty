#include "monty.h"
/**
 * rot_stack - a program function that rotates the stack
 * @head: top element of the stack
 * @count: counts the elements of stack
 * Return: rotated element
 */
void rot_stack(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *dup;

	dup = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	for (; dup->next; dup = dup->next)
	{
	}

	dup->next = *head;
	dup->prev->next = NULL;
	dup->prev = NULL;
	(*head)->prev = dup;
	(*head) = dup;

}

