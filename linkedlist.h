#ifndef LINKEDLIST_H
#define LINKEDLIST_H
class linkedlist
{
public:
    class Node{
    public:
        Node* next = nullptr;
        int val;
        Node(int a);
    };
    Node *head = new Node(0);
    void print();
    void push_back(int a);
    int size = 0;
};

#endif // LINKEDLIST_H
