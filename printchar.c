#include "monty.h"
/**
 * print_char - a program function that prints characters on the stack
 * @head: top element of stack
 * @count: counts elements in a stack
 * Return: chars
 */
void print_char(stack_t **head, unsigned int count)
{
	stack_t *x;

	x = *head;
	if (!x)
	{
		fprintf(stderr, "L%d: can't print char, the stack is empty\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	if (x->n > 127 || x->n < 0)
	{
		fprintf(stderr, "L%d: can't print char, char out of range\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", x->n);

}

