#include "cozi.h"

Queue* createQueue(){
	Queue *q;
	q=(Queue *)malloc(sizeof(Queue));
	if (q==NULL) return NULL;	
	q->front=q->rear=NULL;
	return q;	
}

 void enQueue(Queue*q, Data v){
	NODE* newNODE=(NODE*)malloc(sizeof(NODE));
	newNODE->val=v;
	newNODE->next=NULL;
	if (q->rear==NULL) q->rear=newNODE; 
	else{
		(q->rear)->next=newNODE;
		(q->rear)=newNODE;
	}
	if (q->front==NULL) q->front=q->rear; 
}
 
Data deQueue(Queue*q) {  
	NODE* aux; Data d;
	if (isEmpty(q)) return INT_MIN;
	
	aux=q->front; 
	d=aux->val;
	q->front=(q->front)->next;
	free(aux);
	return d;  	
} 

int isEmptyQ(Queue*q){
	return (q->front==NULL);
}

void deleteQueue(Queue*q){
	NODE* aux;
	while (!isEmpty(q)){
		aux=q->front;
		q->front=q->front->next;
		free(aux);
	}
	free(q);
}	
void reverseQueue(Queue**head)
{
	Queue *temp=createQueue();
	Queue *curent=createQueue();
	curent=*head;
	temp=curent->front;
	Data val=curent->front->val;
	Data last=curent->rear->val;
	while(curent!=curent->rear)
	{
		curent->val=curent->next->val;
		curent->front->val=val;
		curent->rear->val=last;
		curent=curent->next;
	}
	curent->front->val=curent->rear->val;
	curent->rear->val=val;



}
