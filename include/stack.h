#ifndef stack_h
#define stack_h
class stack
{
    public:
        virtual void push(int )=0;
        virtual int pop()=0;
        virtual bool isEmpty()=0;
        virtual bool isFull()=0;
        virtual int top()=0;
};
#endif
