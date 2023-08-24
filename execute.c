#include "monty.h"

/**
 * execute - execute the opcode
 * @stack: head linked list - stack
 * @count: line counter
 * @file: pointer to monty file
 * @content: line contenti
 * return: 0
 */
int execute(char *content, stack_t **stack, unsigned int count, FILE *file)
{
	instruction_t opst[] = {
		{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
		{"pop", f_pop}, {"swap", f_swap}, {"add", add_f},
		{"nop", f_not}, {"sub", f_sub}, {"div", div_f},
		{"mul", mul_f}, {"mod", mod_f}, {"pchar", print_char},
		{"pstr", f_pstr}, {"rotl", f_rotl}, {"rotr", rot_stack},
		{"queue", f_queue}, {"stack", f_stack}, {NULL, NULL}
	};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	for (; opst[i].opcode && op; i++)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{ opst[i].f(stack, count);
			return (0);
		}
	}
	if (op && opst[i].opcode == NULL)
	{	fprintf(stderr, "L%d: unknown instruction %s\n", count, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); 
	} return (1);
}

