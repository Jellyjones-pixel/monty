#include "monty.h"
/**
* free_stack - frees doubly linked lists.
* @head: stack head
*/
void free_stack(stack_t *header)
{
	stack_t *aux;

	aux = header;
	while (header)
	{
		aux = header->next;
		free(header);
		header = aux;
	}
}
/**
 * John Mbithi Mutave and Victor Mburu
 * jellyjones-pixel
*/
