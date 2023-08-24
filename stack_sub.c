#include "monty.h"
/**
 * sub_stack - a function that checks stack for nodes
 * @head: top node on stack
 * @count: counts elements in stack
 * Return: stack with nodes
 */
int sub_stack(stack_t *head, unsigned int count)
{
	stack_t *aux = head;
	int n = 0;

	while (aux != NULL)
	{
		n++;
		aux = aux->next;
	}
	if (n < 2)
	{
		fprintf(stderr, "L%d: can't swap, the stack is not  long enough\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(head);
		exit(EXIT_FAILURE);
	}
	return (1);
}

