#include "monty.h"
/**
 * f_pstr - display the string from the top of the stack
 * @head: head of stack.
 * @counter: line_number
 * Return: no return
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
/**
 * John Mbithi Mutave and Victor Mburu
 * jellyjones-pixel
*/