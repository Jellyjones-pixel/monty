#include "monty.h"

/**
 * f_pall - prints stack
 * @header: head of stack
 * @counter: not used
 * Description: This function prints the elements of the stack
 * Return: no return
*/

void f_pall(stack_t **header, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *header;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
/**
 * John Mbithi Mutave and Victor Mburu
 * jellyjones-pixel
*/
