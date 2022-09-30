#ifndef linkedlistt_h
#define linkedlsitt_h
class Node{
    public:
        int info;
        Node *next;
        Node(){}
        Node(int val);
        Node(int val,Node *next);
};
class linkedlistt{
    public:
        linkedlistt();
        Node *head,*tail;
        bool EmptyList();
        void addtoHead(int );
        void removeFromHead();
        
};
#endif