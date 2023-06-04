#pragma once

template <class T>
class Node{
    T data;
    Node* next;
    public:
    Node<T>();
    Node<T>(T&);
    void set_data(T&);
    T get_data() const;
    void set_next(Node*);
    void print_data();
};

#include "sll_node_imp.h"