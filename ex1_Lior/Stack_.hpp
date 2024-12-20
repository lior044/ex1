#ifndef STACK_H
#define STACK_H

#include "Linked_List.hpp"

/* a positive-integer value stack, with no size limit */
typedef struct Stack
{
	unsigned int* value;
	int count;
} Stack;

void push(Stack* s, unsigned int element);
int pop(Stack* s); // Return -1 if stack is empty

void initStack(Stack* s);
void cleanStack(Stack* s);

bool isEmpty(Stack* s);


#endif // STACK_H