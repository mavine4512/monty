#include "monty.h"
/**
 * f_pint - a program function that prints top elements of stack
 * @head: top elements of stack
 * @count: counts number of elements in a stack
 * Return: top element
 */
void f_pint(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		handle_error_and_exit(count, head);
	}

	printf("%d\n", (*head)->n);

}

