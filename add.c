#include "monty.h"
/**
 * f_add - adds top two elements of stack
 * @head: head of the stack.
 * @counter: line_numbr
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *he;
	int len = 0, aux;

	he = *head;
	while (he)
	{
		he = he->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	he = *head;
	aux = he->n + he->next->n;
	he->next->n = aux;
	*head = he->next;
	free(he);
}


/**
 * John Mbithi Mutave and Victor Mburu
 * jellyjones-pixel
*/
