#include "monty.h"
#define _GNU_SOURCE
/**
* free_stack -This task frees a doubly linked list.
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
