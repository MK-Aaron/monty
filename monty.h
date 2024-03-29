#ifndef MAIN_H
#define MAIN_H

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct global - used in all files
 * @num: stack numbers
 * @buff: buffer
 */
typedef struct global
{
	char *num;
	char *buff;
} global;
extern global gl;

/** Prototypes **/
void instruct(stack_t **head, int cnt);
void _push(stack_t **h, unsigned int cnt);
void _pall(stack_t **h, unsigned int cnt);
void _free(stack_t *h);
int if_digit(char *str);
void _pint(stack_t **h, unsigned int cnt);
void _pop(stack_t **h, unsigned int cnt);
void _swap(stack_t **h, unsigned int cnt);
void _add(stack_t **h, unsigned int cnt);
void _nop(stack_t **h, unsigned int cnt);
void _sub(stack_t **h, unsigned int cnt);
void _div(stack_t **h, unsigned int cnt);
void _mul(stack_t **h, unsigned int cnt);

#endif
