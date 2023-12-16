
#include "monty.h"
/**
 * f_div - divides 2 elements of the stack.
 * @head: head of stack
 * @counter: line_number
*/
void f_div(stack_t **header, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *header;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*header);
		exit(EXIT_FAILURE);
	}
	h = *header;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*header);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n / h->n;
	h->next->n = aux;
	*header = h->next;
	free(h);
}
/**
 * John Mbithi Mutave and Victor Mburu
 * jellyjones-pixel
*/
