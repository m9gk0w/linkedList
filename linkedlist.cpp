#include "linkedlist.h"
#include <iostream>


void linkedlist::print()
{
    Node * curr = head;
    while(curr!=nullptr){ // 52 -> 24
        std::cout << curr->val << " -> ";
        curr = curr->next;
    }
}

void linkedlist::push_back(int a)
{
    size++;
    Node* curr = head;
    if (size == 1){
        curr->val = a;
        return;
    }
    if (size == 2){
        curr->next = new Node(a);
        return;
    }
    while(curr->next!=nullptr){
        curr = curr->next;
    }
    curr->next = new Node(a);
}

linkedlist::Node::Node(int a)
{
    val = a;
}
