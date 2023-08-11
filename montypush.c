#include "monty.h"

/**
 * push - Pushes an element to the stack
 * @stack: pointer to head of stack
 * @line_num: file's line number
 * @n: variable
 * Return: address of new element
 */

void push(stack_t **stack, unsigned int line_number)
{
	int n = 42;

        stack_t *new, *j = *stack;

        if (stack == NULL)
        {
                fprintf(stderr, "L%d: usage: push integer", line_number);
                exit(EXIT_FAILURE);
        }
        new = malloc(sizeof(stack_t));
        if (new == NULL)
                exit(EXIT_FAILURE);
        new->prev = NULL;
        new->n = n;
        new->next = *stack;
	if (*stack)
                j->prev = new;
        *stack = new;
}
