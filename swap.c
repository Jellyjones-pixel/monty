#include "monty.h"
/**
 * f_swap - add top two elements of stack
 * @head: head of sack
 * @counter: line_number
 * Return: no return
*/
void f_swap(stack_t **header, unsigned int counter)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*header);
		exit(EXIT_FAILURE);
	}
	h = *header;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}
/**
 * John Mbithi Mutave and Victor Mburu
 * jellyjones-pixel
*/
