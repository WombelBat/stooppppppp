#ifndef STIVE_H_
#define STIVE_H_

#include "lib.h"


Data top(NODE *top);
void push(NODE**top, Data v);
Data pop(NODE**top);
int isEmpty(NODE*top);
void deleteStack(NODE**top);
void checkParat();

#endif