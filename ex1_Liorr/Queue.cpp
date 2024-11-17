#include "Queue.hpp"
#include <iostream>


void initQueue(Queue * q, unsigned int size) {
    q->data = new unsigned int[size];
    q->size = size;
    q->front = 0;
    q->rear = 0;
    q->count = 0;
}

void cleanQueue(Queue* q) {
    delete[] q->data;
    q = NULL;
}

// Check if the queue is empty
bool isEmpty(Queue* q) {
    return q->count == 0;
}

// Check if the queue is full
bool isFull(Queue* q) {
    return q->count == q->size;
}

// Add an element to the queue
void enqueue(Queue* q, unsigned int newValue) {
    if (isFull(q)) {
        std::cout << "Queue is full. Cannot enqueue" << newValue << std::endl;
        return;
    }

    q->data[q->rear] = newValue;
    q->count++;
    q->rear = q->count;
}

// Remove and return the front element of the queue
int dequeue(Queue* q) {
    unsigned int value;
    int i = 0;
    if (isEmpty(q)) {
        std::cout << "Queue is empty. Cannot dequeue." << std::endl;
        return -1;
    }
    value = q->data[q->front];
    for (i = 0; i < q->count-1; i++) {
        if (i + 1 == q->count) {
            q->data[i] = NULL;
        }
        else {
            q->data[i] = q->data[i + 1];
        }
        
    }
    q->count--;
    q->rear--;
    return value;
}

Queue* makequeue(unsigned int size) {
    Queue* q = new Queue;
    initQueue(q, size);
    return q;
}