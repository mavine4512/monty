#include "monty.h"
/**
 * pop_exit - a program function that is incharge of errors when deleting
 * elements from a stack
 * @head: top element in stack
 * @count: counts number of elements in a stack
 * Return: popped up element
 */
void pop_exit(unsigned int count, stack_t **head)
{
	fprintf(stderr, "L%d: can't pop, the stack is empty\n", count);
	fclose(bus.file);
	free(bus.content);
	free_stack(*head);
	exit(EXIT_FAILURE);

}

