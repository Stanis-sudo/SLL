#pragma once
#include <iostream>
#include "sl_list.h"

template <class T>
SL_List<T>::SL_List(){
    head = nullptr;
    tail = head;
    size = 0;
}

template <class T>
void SL_List<T>::push_back(T& data) {
    auto node = new Node<T>(data);
    if (!head) head = node;
}

template <class T>
void SL_List<T>::print() const {
    std::cout << "Head address = " << head << std::endl;
    std::cout << "Head data = " << head->get_data() << std::endl;
}