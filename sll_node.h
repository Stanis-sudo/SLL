#pragma once

template <class T>
class Node
{
    T data;
    Node *next;

public:
    //Node<T>();
    Node<T>(const T &);
    void set_data(const T &);
    T get_data() const;
    void set_next(Node *);
    Node* get_next() const;
    void print_data() const;
};

#include "sll_node_imp.h"