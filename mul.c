#include "monty.h"
/**
 * mul_f - a program function that multiplies elements of stack
 * @head: top element of stack
 * @count: counts elements of a stack
 * Return: multiplied elements 
 */
void mul_f(stack_t **head, unsigned int count)
{
	int len = 0;
	stack_t *x;

	for (x = *head; x; x = x->next)
	{
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, the stack is not  long enough\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);

	}
	x = *head;
	x->next->n *= x->n;
	*head = x->next;
	free(x);

}

