#include "monty.h"

/**
 * handle_error_and_exit - handles error and exits the program
 * @count: The line number where the error occurred.
 * @head: A pointer to the head of the stack
 */
void handle_error_and_exit(unsigned int count, stack_t **head)
{
	fprintf(stderr, "L%d: cant't point, stack empty\n", count);
	fclose(bus.file);
	free(bus.content);
	free_stack(*head);
	exit(EXIT_FAILURE);
}

