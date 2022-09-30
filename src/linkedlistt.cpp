#include "linkedlistt.h"
#include <iostream>
using namespace std;

Node::Node(int val) : info(val), next(NULL) {}
Node::Node(int val, Node *next) : info(val), next(next) {}
linkedlistt::linkedlistt() : head(NULL), tail(NULL) {}


bool linkedlistt::EmptyList()
{
    if (head == NULL)
    {

        return true;
    }
    else
    {
        return false;
    }
}


void linkedlistt::addtoHead(int data)
{
    Node *newNode = new Node(data);
    if (!EmptyList())
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        head = newNode;
        tail = newNode;
    }

}


void linkedlistt :: removeFromHead()
{
    Node *target = head;
    head = head->next;
    delete target;
}
