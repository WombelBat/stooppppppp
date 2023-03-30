#include "lib.h"
void addAtBeginning(NODE **head, Data v)
{
	NODE *newNODE = (NODE *)malloc(sizeof(NODE));
	newNODE->val = v;
	newNODE->next = *head;
	*head = newNODE;
}

void addAtEnd(NODE **head, Data v)
{
	NODE *aux = *head;
	NODE *newNODE = (NODE *)malloc(sizeof(NODE));
	newNODE->val = v;
	if (*head == NULL)
		addAtBeginning(&*head, v);
	else
	{
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = newNODE;
		newNODE->next = NULL;
	}
}

void display(NODE *head)
{
	while (head != NULL)
	{
		printf("%d ", head->val);
		head = head->next;
	}
	printf("\n");
}
// int getsizeNODE()
// {

//     return sizeof(NODE);
// }
