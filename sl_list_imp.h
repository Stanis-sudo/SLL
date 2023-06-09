#pragma once
#include <iostream>
#include "sl_list.h"

template <class T>
SL_List<T>::SL_List()
{
    head = nullptr;
    tail = nullptr;
    size = 0;
}

template <class T>
void SL_List<T>::push_back(const T &data)
{
    auto node = new Node<T>(data);
    if (!head)
    {
        head = node;
        tail = head;
    }
    else
    {
        tail->set_next(node);
        tail = node;
    }
    size++;
}
template <class T>
void SL_List<T>::push_front(const T &data)
{
    auto node = new Node<T>(data);
    if (!head)
    {
        head = node;
        tail = head;
    }
    else
    {
        node->set_next(head);
        head = node;
    }
    size++;
}

template <class T>
void SL_List<T>::pop_back()
{
    if (!head or size < 1)
        return;
    size_t p = size - 1;
    auto current = head;
    while (--p)
        current = current->get_next();
    delete tail;
    tail = current;
    tail->set_next(nullptr);
    size--;
}

template <class T>
void SL_List<T>::pop_front()
{
    if (!head or size < 1)
        return;
    auto temp = head->get_next();
    delete head;
    head = temp;
    size--;
}

template <class T>
void SL_List<T>::insert(const T &data, const int pos)
{
    if (pos < 0 or pos > size)
        return;
    auto node = new Node<T>(data);
    auto temp = head;
    if (!head and !pos)
    {
        head = node;
        tail = head;
    }
    else if (!pos)
    {
        node->set_next(head);
        head = node;
    }
    else if (pos == size)
    {
        tail->set_next(node);
        tail = node;
    }
    else
    {
        int p = pos;
        while (--p)
            temp = temp->get_next();
        node->set_next(temp->get_next());
        temp->set_next(node);
    }
    size++;
}

template <class T>
void SL_List<T>::print() const
{
    std::cout << "Size = " << size << std::endl;
    auto temp = head;
    int count = 1;
    while (temp)
    {
        std::cout << ".:: " << count++ << " ::." << std::endl;
        std::cout << "Node address = " << temp << std::endl;
        std::cout << "Node data = " << temp->get_data() << std::endl;
        temp = temp->get_next();
    }
}