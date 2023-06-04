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
    void push_back(T&);
    void push_front(T&);
    void print() const;
};

#include "sl_list_imp.h"