#ifndef LIB_H_
#define LIB_H_
#include <stdlib.h>
#include <stdio.h>
#include <string.h>



typedef char Data;

typedef struct Node
{
	Data val;
	struct Node *next;
} NODE;

void addAtBeginning(NODE **head, Data v);

void addAtEnd(NODE **head, Data v);
void display(NODE *head);
// int getsizeNODE()
// {

//     return sizeof(NODE);
// }

#endif