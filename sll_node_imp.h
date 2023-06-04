#pragma once
#include "sll_node.h"
#include<iostream>

template <class T>
Node<T>::Node(){
    data = {};
    next = nullptr;
}
template <class T>
Node<T>::Node(T& data){
    this->data = data;
    next = nullptr;
};
template <class T>
void Node<T>::set_data(T& data){
    this->data = data;
    return;
}

template <class T>
T Node<T>::get_data() const{
    return data;
}

template <class T>
void Node<T>::set_next(Node<T>* next){
    std::cout << "this->next = " << this->next << std::endl;
    this->next = next;
    std::cout << "this->next = " << this->next << std::endl;
    return;
}

template <class T>
void Node<T>::print_data(){
    std::cout << "Data = " << data << std::endl;
}