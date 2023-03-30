#include "stive.h"

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

void checkParat()
{
    NODE *head, *curent;
    head=malloc(sizeof(NODE));
    head->next=NULL;
    char *c;
    int i=1,chf=0,chs=0;
    printf("wrtite text with c()");
    gets(c);
    head->val=c[0];
    do
    {
        if(curent->val=='(')
        {
            if(chs==1)
                {
                      printf("nu e corect la %d,%p",i+1,curent);
                     chf=0;
                    chs=0;
                }
            else if(chf==0)
                {
                   chf=1;
                }
        }
        if(curent->val==')')
        {
            if(chf==1)
                {
                    chf=0;
                    chs=0;
                }
            else if(chf==0)
                {
                    printf("nu e corect la %d,%p",i+1,curent);
                     chf=0;
                    chs=0;
                }

        }
        addAtEnd(curent,c[i]);
        /* code */
        curent=curent->next;


        i++;
    } while (c[i]!='\0');
    


}
