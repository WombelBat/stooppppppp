#include "lib.h"
Data top(NODE *top){
	if (isEmpty(top)) return INT_MIN;
	return top->val;
} 

void push(NODE**top, Data v) {
	NODE* newNODE=(NODE*)malloc(sizeof(NODE));
	newNODE->val=v;
	newNODE->next=*top;
	*top=newNODE;
}

Data pop(NODE**top) {
	if (isEmpty(*top)) return INT_MIN;
	NODE *temp=(*top); 		
	Data aux=temp->val;	
	*top=(*top)->next;      		
	free(temp);
	return aux;
}

int isEmpty(NODE*top){
	return top==NULL;
}
	
void deleteStack(NODE**top){
	

	NODE  *temp;
	while (!isEmpty(*top))
	{
		temp=*top;
		*top=(*top)->next;
		free(temp);
	}
}
