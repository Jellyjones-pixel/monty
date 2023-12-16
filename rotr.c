#include "monty.h"
/**
  *f_rotr- rotates stack to  bottom
  *@head: heasd of stack
  *@counter: line_number
  *Return: no return
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counterer)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
/**
 * John Mbithi Mutave and Victor Mburu
 * jellyjones-pixel
*/
