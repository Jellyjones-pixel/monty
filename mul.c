#include "monty.h"
/**
 * f_mul - multiplies 2 top elements of stack
 * @head: head of stack
 * @counter: line_number
 * Return: no retun
*/
void f_mul(stack_t **header, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*header);
		exit(EXIT_FAILURE);
	}
	h = *header;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*header = h->next;
	free(h);
}
/**
 * John Mbithi Mutave and Victor Mburu
 * jellyjones-pixel
*/
