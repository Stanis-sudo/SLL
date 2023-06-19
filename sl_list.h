#pragma once
#include "sll_node.h"

template <class T>
class SL_List
{
    Node<T>* head;
    Node<T>* tail;
    unsigned int sz;

public:
    SL_List();
    class iterator;
    iterator begin();
    iterator end();
    void push_back(const T&);
    void push_front(const T&);
    void pop_back();
    void pop_front();
    void insert(const T&, const int);
    T front() const;
    T back() const;
    unsigned int size() const;
    void print() const;
};

#include "sl_list_imp.h"