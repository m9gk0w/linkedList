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
        // Список пуст – новый узел становится головой
        head = newNode;
    } else {
        // Ищем последний узел
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
