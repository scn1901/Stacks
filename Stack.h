#ifndef STACK_H
#define STACK_H 


// #include <limits.h> 
// #include <stdio.h> 
// #include <stdlib.h> 
typedef struct node {
    int data; // Cust data;
    struct node* next;
}StackNode;

int isEmpty(StackNode* pList);

void push(StackNode** top_ref, int data);

void pop(StackNode** top_ref, int* popped);

//int peek( StackNode* top_ref);





#endif