#pragma once
#include <iostream>
#include "sl_list.h"

template <class T>
SL_List<T>::SL_List(){
    head = nullptr;
    tail = nullptr;
    size = 0;
}

template <class T>
void SL_List<T>::push_back(T& data) {
    auto node = new Node<T>(data);
    if (!head) {
        head = node;
        tail = head;
    }
    else {
        tail->set_next(node);
        tail = node;
    }
        size++;
}
template <class T>
void SL_List<T>::push_front(T& data) {
    auto node = new Node<T>(data);
    if (!head) {
        head = node;
        tail = head;
    }
    else {
        node->set_next(head);
        head = node;
    }
        size++;
}

template <class T>
void SL_List<T>::print() const {
    std::cout << "Head address = " << head << std::endl;
    std::cout << "Head data = " << head->get_data() << std::endl;
    std::cout << "Tail address = " << tail << std::endl;
    std::cout << "Tail data = " << tail->get_data() << std::endl;
    std::cout << "Size = " << size << std::endl;
}