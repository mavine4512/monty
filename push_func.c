#include "monty.h"
/**
 * f_push - a program function that adds elements to the stack
 * @head: top element of stack
 * @count: counts elements of stack
 * Return: added element
 */
void f_push(stack_t **head, unsigned int count)
{
	int x, y = 0, flag = 0;
	char *error_message = "L%d: usage: push integer\n";

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			y++;
		for (; bus.arg[y] != '\0'; y++)
		{
			if (bus.arg[y] > 57 || bus.arg[y] < 48)
				flag = 1;
		}
		if (flag == 1)
			goto exit_failure;
	}
	else
		goto exit_failure;

	x = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, x);
	else
		addqueue(head, x);
	return;
exit_failure:
	fprintf(stderr, error_message, count);
	fclose(bus.file);
	free(bus.content);
	free_stack(*head);
	exit(EXIT_FAILURE);
}

