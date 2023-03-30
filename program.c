#include "lib.h"
#include "stive.h"

int main()
{
    NODE *a=malloc(sizeof(NODE));
    a->next=NULL;
    a->val='n';
    addAtEnd(&a,'h');
    
    display(a);
    //printf("%d",isEmpty(&a));
    checkParat();

    return 0;
}