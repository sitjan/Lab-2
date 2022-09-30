#ifndef arrStack_h
#define arrStack_h
#define MAX_STACKSIZE 40
#include "stack.h"
class arrstack: public stack
{
public:
    int arr[MAX_STACKSIZE];
    int top_index;
    arrstack();
    void push(int );
    int pop();
    bool isEmpty();
    bool isFull();
    int top();
};
#endif