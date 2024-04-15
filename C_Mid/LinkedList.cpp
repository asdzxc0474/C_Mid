#include <iostream>
#include "LinkedList.h"
using namespace std;

template<typename T>
ListNode<T>::ListNode(T val) {
    data = val;
    next = nullptr;
}

template<typename T>
ListNode<T>::~ListNode() {
    // If there's any cleanup needed for the ListNode
}

template<typename T>
void ListNode<T>::setnext(ListNode<T>* ListNode) {
    next = ListNode;
}

template<typename T>
ListNode<T>* ListNode<T>::getnext()
{
    return next;
}

template<typename T>
T ListNode<T>::getval()
{
    return data;
}

template<typename T>
LinkedList<T>::LinkedList() {
    head = nullptr;
    len = 0;
}

template<typename T>
LinkedList<T>::~LinkedList() {
    //delete[] head;
}

template<typename T>
void LinkedList<T>::pushback(T Node) {
    ListNode<T>* newNode = new ListNode<T>(Node);
    if (head == nullptr) {
        head = newNode;
    }
    else {
        ListNode<T>* temp = head;
        while (temp->getnext() != nullptr) {
            temp = temp->getnext();
        }
        temp->setnext(newNode);
    }
    len++;
}

template<typename T>
void LinkedList<T>::pushfront(T Node) {
    ListNode<T>* newNode = new ListNode<T>(Node);
    newNode->setnext(head);
    head = newNode;
    len++;
}

template<typename T>
void LinkedList<T>::print() {
    ListNode<T>* temp = head;
    while (temp != nullptr) {
        cout << temp->getval() << ",";
        temp = temp->getnext();
    }
}
template<typename T>
ListNode<T>* LinkedList<T>::getfirstptr() 
{
    ListNode<T>* temp = head;
    if (temp != nullptr)return temp;
    else return 0;
}
template<typename T>

LinkedList<T>::LinkedList(const LinkedList<T>& other) 
{

    ListNode<T>* temp = other.head;
    while (temp != nullptr) 
    {
        pushback(temp->getval());
        temp = temp->getnext();
    }
}