#pragma once
#include <iostream>
#include "sl_list.h"

template <class T>
SL_List<T>::SL_List()
{
    head = nullptr;
    tail = nullptr;
    sz = 0;
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
    sz++;
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
    sz++;
}

template <class T>
void SL_List<T>::pop_back()
{
    if (!head or sz < 1)
        return;
    size_t p = sz - 1;
    auto current = head;
    while (--p)
        current = current->get_next();
    delete tail;
    tail = current;
    tail->set_next(nullptr);
    sz--;
}

template <class T>
void SL_List<T>::pop_front()
{
    if (!head or sz < 1)
        return;
    auto temp = head->get_next();
    delete head;
    head = temp;
    sz--;
}

template <class T>
void SL_List<T>::insert(const T &data, const int pos)
{
    if (pos < 0 or pos > sz)
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
    else if (pos == sz)
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
    sz++;
}

template <class T>
T SL_List<T>::front() const {
    return head->get_data();
}

template <class T>
T SL_List<T>::back() const {
    return tail->get_data();
}

template <class T>
unsigned int SL_List<T>::size() const {
    return sz;
}

template <class T>
void SL_List<T>::print() const
{
    std::cout << "Size = " << sz << std::endl;
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

template <class T>
class SL_List<T>::iterator : public std::iterator<std::forward_iterator_tag, int> {
    public:
    friend class SL_List<T>;
    Node<T>* curr;

    typedef T value_type;
    typedef T& reference;
    typedef T* pointer;
    typedef T difference_type;
    typedef std::forward_iterator_tag iterator_category;

    iterator(Node<T>* x = 0) : curr(x){}

    bool operator== (const iterator& x) const {
        return curr == x.curr;
    }

    bool operator!= (const iterator& x) const {
        return curr != x.curr;
    }

    value_type operator*() const {
        return curr->get_data();
    }

    iterator& operator++() {
        curr = curr->get_next();
        return *this;
    }

    iterator& operator++(int) {
        iterator tmp(curr);
        curr = curr->get_next();
        return tmp;
    }
};

template <class T>
typename SL_List<T>::iterator SL_List<T>::begin() {
    return iterator(SL_List<T>::head);
}
template <class T>
typename SL_List<T>::iterator SL_List<T>::end() {
    return SL_List<T>::iterator(nullptr);
}