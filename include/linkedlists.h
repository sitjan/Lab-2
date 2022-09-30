#ifndef linkedlists_h
#define linkedlists_h
#include "stack.h"
#include "linkedlistt.h"

class linkedlists : public stack
{
    public:
    linkedlistt  *list1;
    linkedlists();
    void push(int);
    int pop();
    bool isEmpty();
    bool isFull();
    int top();

};

#endif