#include "arrstack.h"
#include <iostream>
using namespace std;

arrstack::arrstack()
{
    top_index=-1;
}
bool arrstack::isEmpty() 
{
    if(top_index==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}


bool arrstack::isFull() 
{
    if(top_index==MAX_STACKSIZE)
    {
        return true;
    }
    else
    {
        return false;
    }
}


void arrstack::push(int num)
{
    if(!isFull())
    {
        top_index++;
        *(arr+top_index)=num;
        
    }
    else
    {
        cout<<"Stack Overflow!!"<<endl;
    }
}


int arrstack::pop()
{
    int result;
    if(!isEmpty())
    {
        result=*(arr+top_index);
        top_index--;
    }
    else
    {
        cout<<" \n \n \n Stack Underflow !!! "<<endl;
        
    }
    return result;
}

int arrstack::top()
{
    return *(arr+top_index);   
}

