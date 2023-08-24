#include "monty.h"
/**
 * f_queue - a program function that prints elements in a queue
 * @head: top element
 * @count: counts elements in a queue
 */
void f_queue(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;
	bus.lifi = 1;
}
/**
 * addqueue - a program function that adds elements to the queue
 * @n: value to be added
 * @head: top of queue
 * Return: queue
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error\n");
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		stack_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
		new->prev = current;
	}
}

