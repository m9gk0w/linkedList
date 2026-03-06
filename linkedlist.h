#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <vector>
#include <iostream>

class linkedlist
{
public:
    class Node{
    public:
        Node* next;
        int val;
        Node(int a) : val(a), next(nullptr) {};
    };
    linkedlist(): head(nullptr), size_(0) {};
    void print();
    void push_back(int a);
    int size() {return size_;}
    std::vector<int> toVector();
    void pop_back();
    private:
        int size_ = 0;
        Node *head;

};

#endif // LINKEDLIST_H
