#include"Stack.h"
#include <limits.h> 
#include <stdio.h> 
#include <stdlib.h> 
int isEmpty(StackNode* pList)
{
    int status = 0;
    if (pList == NULL)
        status = 1;
    return status;
}

void push(StackNode** top_ref, int ndata)
{
    StackNode* stackNode = (StackNode*)malloc(sizeof(StackNode));
    stackNode->data = ndata;
    stackNode->next = NULL;
    stackNode->next = *top_ref;
    *top_ref = stackNode;
    printf("%c pushed to stack\n", ndata);
}

void pop(StackNode** top_ref, int* popped)
{
    if (isEmpty(*top_ref))
        printf("Stack is empty\n");
    StackNode* temp = *top_ref;
    *top_ref = (*top_ref)->next;
    *popped = temp->data;
    free(temp);


}

int peek(StackNode* top_ref)
{
    if (!isEmpty(top_ref)) {
        return top_ref->data;
    }
    return INT_MIN;
}

// return  ; 