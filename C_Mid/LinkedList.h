#pragma once
template<typename T>
class ListNode {
public:
    ListNode(T val);
    ~ListNode();
    void setnext(ListNode<T>* ListNode);
    ListNode<T>* getnext();
    T getval();

private:
    T data;
    ListNode<T>* next;
};

template<typename T>
class LinkedList {
public:
    LinkedList();
    ~LinkedList();
    void pushback(T Node);
    void pushfront(T Node);
    void print();
    ListNode<T>* getfirstptr();
    LinkedList(const LinkedList<T>& other);
private:
    ListNode<T>* head;
    size_t len;
};