#ifndef COZI_H_
#define COZI_H_

#include "stive.h"
typedef struct Queue
{
	struct Queue *front;
	Data val;
	struct Queue *rear;
	struct Queue *next;

}Queue;
void deleteQueue(Queue*q);
int isEmptyQ(Queue*q);
Data deQueue(Queue*q);
void enQueue(Queue*q, Data v);
Queue* createQueue();



#endif