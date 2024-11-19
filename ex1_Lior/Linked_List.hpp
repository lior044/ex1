#ifndef Linked_List_H
#define Linked_List_H


typedef struct node
{
    int value;
    struct node* next;
}   node;

node* initNode();
node* addToStart(node* head, node* n);
void printNode(node* n);
void printlist(node* n);
void freeList(node* head);
int listLen(node* n, int len);



#endif /* Linked_List_H */