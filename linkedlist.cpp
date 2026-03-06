#include "linkedlist.h"

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

std::vector<int> linkedlist::toVector()
{
    std::vector<int> result;
    Node* current = head;
    while (current != nullptr) {
        result.push_back(current->val);
        current = current->next;
    }
    return result;
}

linkedlist::Node::Node(int a)
{
    val = a;
}
