#include"Stack.h"
#include <limits.h> 
#include <stdio.h> 
#include <stdlib.h> 

int main()
{
    StackNode* root = NULL;

    int value;

    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
    pop(&root, &value);
    printf("%d popped from stack\n", value);

    //printf("Top element is %d\n", peek(root)); 

    return 0;
}