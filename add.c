#include "monty.h"
/**
 * f_add - adds top two elements of stack
 * @head: head of the stack.
 * @counter: line_numbr
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *t;
	int len = 0, aux;

	t = *head;
	while (t)
	{
		t = t->next;
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
	t = *head;
	aux = t->n + t->next->n;
	t >next->n = aux;
	*head = t->next;
	free(t);
}


/**
 * John Mbithi Mutave and Victor Mburu
 * jellyjones-pixel
*/