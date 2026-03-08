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
    Node* newNode = new Node(a);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = newNode;
    }
    ++size_;
}

void linkedlist::push_front(int a)
{
    Node* newNode = new Node(a);
    newNode->next = head;
    head = newNode;
    size_++;
}

void linkedlist::pop_front()
{
    Node* newNode = head->next;
    delete head;
    head = newNode;
    size_--;
}

void linkedlist::insert(int val, int index)
{
    Node* newNode = new Node(val);
    Node* curr = head;
    Node* help = head;
    for (int i = 0; i < index -1; i++){ // 52->24->82->28
                                     // insert (55, 2)
        curr = curr->next;           // 52->24->55->82->28
        help = help->next;
    }
    help = help->next;
    curr->next = newNode;
    newNode->next = help;


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

void linkedlist::pop_back()
{
    if (head == nullptr) {
        return;
    }

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        size_ = 0;
        return;
    }

    Node* curr = head;
    while (curr->next->next != nullptr) {
        curr = curr->next;
    }

    Node* toDelete = curr->next;
    delete toDelete;
    curr->next = nullptr;
    --size_;
}
