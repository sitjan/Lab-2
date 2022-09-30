#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <windows.h>
using namespace std;
#include "arrstack.h"
#include "linkedlists.h"
int main()
{   
    int pref;

    stack *S1 = new arrstack();
     stack *S2=new linkedlists();
    cout<<"Which implementation you want to see?"<<endl;
    cout<<"\n\n 1. Array \n 2. Linkedlist"<<endl;
    cin>> pref;
    if (pref == 1){
            goto a;
        
    }
    else if(pref ==2) {
        goto b;
    }
    
   a:
   system("cls");
    int i;

    cout<<"\n\n Impelementing stack using array"<<endl<<endl;
    
   
   
    cout<<"\nChecking stack is empty or not"<<endl;
    if(S1->isEmpty())
    {
        cout<<"\n The stack is empty"<<endl;
    }
    else
    {
        cout<<"\n The stack is not empty"<<endl;
    }

    cout<<"\n How many elements you want to push into the stack?"<<endl;
    int val;
    cin>>val;
    cout<<endl<<"Pushing elements into stack..."<<endl;
    
    if (S1->isFull() !=1 ){
        for(i =0; i<val; i++){
            int x =  rand();
            S1->push(x);
         }
    }

    cout<<"Checking is full or not"<<endl;
    if(S1->isFull())
    {
        cout<<"The stack is full "<<endl;
    }
    else
    {
        cout<<"The stack is not full"<<endl;
    }
    
   
    cout<<"Popping an element from the stack"<<endl;
    cout<<"\n how many items you want to pop? (should be less than or equal to 40)"<<endl;
     int optn;
     cin>> optn;
    for (i = 0; i< optn ; i++){
    cout<<"\n Item popped "<<S1->pop()<<endl;
    }


    cout<<"\n Checking stack is empty or not"<<endl;
    if(S1->isEmpty())
    {
        cout<<"The stack is empty"<<endl;
    }
    else
    {
        cout<<"The stack is not empty"<<endl;
    }
     Sleep(5000);
     delete S1;
    goto end;

    b:
    system("cls");

    //stack using linked list implementation//
    
    cout<<"\n\n\n\t\t\t Implementing stack using linked list"<<endl<<endl;
    
    
   
    cout<<"\nChecking whether the stack is empty or not."<<endl;
    
    if(S2->isEmpty())
    {
        
        cout<<"\t\t\t\t The stack is empty"<<endl;
    }
    else
    {
        cout<<"\t\t\t\t\tThe stack is not empty."<<endl;
    }
    



    cout<<endl<<"Pushing an element into the stack"<<endl;
    cout<<"\n How many elements you want to push into the stack?"<<endl;
    
    cin>>val;
    cout<<endl<<"Pushing elements into stack..."<<endl;
    
    if (S2->isFull() !=1 ){
        for(i =0; i<val; i++){
            int x =  rand();
            S2->push(x);
         }
    }

cout<<endl<<"\n\nChecking whether the stack is full or not"<<endl;
    if(S2->isFull())
    {
        cout<<" \t \t The stack is full"<<endl;
    }
    else
    {
        cout<<"\n \t\t The stack is not full."<<endl;
    }


     cout<<"Popping an element from the stack"<<endl;
     cout<<"\t How many items you want to pop? (should be less than or equal to 40)"<<endl;
    
     cin>> optn;
    for (i = 0; i< optn ; i++)
        {
            cout<<"\n Item popped "<<S2->pop()<<endl;
        }


    if(S2->isEmpty())
        {
            cout<<" Stack is empty !!"<<endl;
        }
    else
        {
            cout<<"The stack is not empty."<<endl;
        }
Sleep(5000);
 delete S2;

end:
;
}
