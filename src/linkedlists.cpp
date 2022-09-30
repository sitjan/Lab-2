#include "linkedlists.h"
linkedlists::linkedlists()
{
    list1=new linkedlistt();
}
bool linkedlists::isEmpty()
{
    if(list1->EmptyList())
    {
        return true;
    }    
    else 
    {
        return false;
    }
}

bool linkedlists::isFull()
{
    return false;
}
void linkedlists::push(int num)
{
    list1->addtoHead(num);
}

int linkedlists::pop()
{
    int result;
    result= list1->head->info;
    list1->removeFromHead();
    return result;
}
int linkedlists::top()
{
    return list1->head->info;
}
