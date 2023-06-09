#pragma once
#include "sll_node.h"

template <class T>
class SL_List
{
    Node<T>* head;
    Node<T>* tail;
    unsigned int size;

public:
    SL_List();
    void push_back(const T&);
    void push_front(const T&);
    void pop_back();
    void pop_front();
    void insert(const T&, const int);
    void print() const;
};

#include "sl_list_imp.h"