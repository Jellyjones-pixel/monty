#include "monty.h"
/**
 * f_pint - prints the top
 * @head: head of stack
 * @counter: line_number
 * Return: no return
*/
void f_pint(stack_t **header, unsigned int counter)
{
	if (*header == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*header);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*header)->n);
}
/**
 * John Mbithi Mutave and Victor Mburu
 * jellyjones-pixel
*/
