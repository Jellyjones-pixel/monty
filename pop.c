#include "monty.h"
/**
 * f_pop - prints the top
 * @head: head of stack
 * @counter: ln_number
 * Return: no return
*/
void f_pop(stack_t **header, unsigned int counter)
{
	stack_t *h;

	if (*header == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*header);
		exit(EXIT_FAILURE);
	}
	h = *header;
	*header = h->next;
	free(h);
}
/**
 * John Mbithi Mutave and Victor Mburu
 * jellyjones-pixel
*/
