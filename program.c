#include "lib.h"
#include "stive.h"

int main()
{
    NODE *a=malloc(sizeof(NODE));
    a->next=NULL;
    addAtBeginning(&a,5);
    
    display(a);
    printf("%d",isEmpty(&a));

    return 0;
}