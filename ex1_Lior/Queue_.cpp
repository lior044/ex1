#include "Queue_.hpp"
#include <iostream>


void initQueue(Queue* q, unsigned int size) {
    q->data = new unsigned int[size];
    q->size = size;
    q->front = 0;
    q->rear = 0;
    q->count = 0;
}

void cleanQueue(Queue* q) {
    delete[] q->data;
    q->data = nullptr;
    q->front = q->rear = q->count = 0;
}

// Check if the queue is empty
bool isEmpty(Queue* q) {
    return q->count == 0;
}

// Check if the queue is full
bool isFull(Queue* q) {
    return q->count == q->size;
}

// Add an element to the back of the queue
void enqueue(Queue* q, unsigned int newValue) {
    if (isFull(q)) {
        std::cout << "Queue is full. Cannot enqueue: " << newValue << std::endl;
        return;
    }

    q->data[q->rear] = newValue;
    q->rear = (q->rear + 1) % q->size; // Wrap around using modulo
    q->count++;
}

// Remove and return the front element of the queue 
int dequeue(Queue* q) {
    unsigned int value;
    int i = 0;
    int nextIndex;
    if (isEmpty(q)) {
        std::cout << "Queue is empty. Cannot dequeue." << std::endl;
        return -1;
    }

    value = q->data[q->front];
    for (i = 0; i != q->rear; i++) {
        nextIndex = i + 1; 
        q->data[i] = q->data[nextIndex];
    }
    q->rear--;
    q->count--;

    return value;
}

Queue* makequeue(unsigned int size) {
    Queue* q = new Queue;
    initQueue(q, size);
    return q;
}

void displayQueue(Queue* q) {
    unsigned int i = 0;

    if (isEmpty(q)) {
        std::cout << "Your queue is empty!" << std::endl;
        return;
    }

    std::cout << "Current queue contents:" << std::endl;
    for (i = 0; i < q->count; i++) {
        std::cout << "Position " << i + 1 << ": " << q->data[i] << std::endl;
    }
}