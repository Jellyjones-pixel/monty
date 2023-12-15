#include "monty.h"
/**
 * addnode - adding node to the head stack
 * @head: head of the stack
 * @n: new_value
*/
void addnode(stack_t **header, int n)
{

	stack_t *new_node, *aux;

	aux = *header;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->n = n;
	new_node->next = *header;
	new_node->prev = NULL;
	*header = new_node;
}
/**
 * John Mbithi Mutave and Victor Mburu
 * jellyjones-pixel
*/
