#include "Stack_.hpp"
#include <iostream>

void push(Stack* s, unsigned int element) {
    s->value[s->count] = element;
    s->count++;
}


int pop(Stack* s) { // Return -1 if stack is empty
    Stack* temp;
    unsigned int value;
    if (isEmpty(s)) {
        std::cout << "Stack is empty. Cannot pop." << std::endl;
        return -1;
    }
    else {
        value = s->value[s->count - 1];
        s->count--;
        return value;
    }


}
   

void initStack(Stack* s) {
    s->value = new unsigned int;
    s->count = 0;
}

void cleanStack(Stack* s) {
    delete[] s->value;
}

bool isEmpty(Stack* s) {
    return s->count == 0;
}
