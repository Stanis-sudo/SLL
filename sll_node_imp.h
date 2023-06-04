#pragma once
#include "sll_node.h"
#include <iostream>

/*template <class T>
Node<T>::Node()
{
    data = {};
    next = nullptr;
}*/
template <class T>
Node<T>::Node(const T &data)
{
    this->data = data;
    next = nullptr;
}
template <class T>
void Node<T>::set_data(const T &data)
{
    this->data = data;
    return;
}

template <class T>
T Node<T>::get_data() const
{
    return data;
}

template <class T>
void Node<T>::set_next(Node<T> *next)
{
    this->next = next;
}

template <class T>
Node<T>* Node<T>::get_next() const
{
    return next;
}

template <class T>
void Node<T>::print_data() const
{
    std::cout << "Data = " << data << std::endl;
}