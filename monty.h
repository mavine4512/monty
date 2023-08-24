#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#define  _POSIX_C_SOURCE 200809L

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: pointer to the previous stack
 * @next: pointer to the next stack
 *
 * Description: doubly linked list node structure for stack,
 * stack, queues, LIFO, FIFO project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack queue
 * Description: carries value through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
} bus_t;

extern bus_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: opcode
 * @f: function
 *
 * Description: opcode and its function
 * for stack, queue, LIFO, FIFO project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char *clear_line(char *content);
void f_push(stack_t **head, unsigned int count);
void f_pall(stack_t **head, unsigned int count);
void f_pint(stack_t **head, unsigned int count);
int execute(char *content, stack_t **head, unsigned int count, FILE *file);
void free_stack(stack_t *head);
void f_pop(stack_t **head, unsigned int count);
void f_swap(stack_t **head, unsigned int count);
void add_f(stack_t **head, unsigned int count);
void f_not(stack_t **head, unsigned int count);
void f_sub(stack_t **head, unsigned int count);
void div_f(stack_t **head, unsigned int count);
void mul_f(stack_t **head, unsigned int count);
void mod_f(stack_t **head, unsigned int count);
void print_char(stack_t **head, unsigned int count);
void f_pstr(stack_t **head, unsigned int count);
void f_rotl(stack_t **head, unsigned int count);
void rot_stack(stack_t **head, __attribute__((unused)) unsigned int count);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void f_queue(stack_t **head, unsigned int count);
void f_stack(stack_t **head, unsigned int count);
void handle_error_and_exit(unsigned int count, stack_t **head);
void pop_exit(unsigned int count, stack_t **head);
void mod_error(unsigned int count, stack_t **head);
int sub_stack(stack_t *head, unsigned int count);
#endif

