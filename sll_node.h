#pragma once
#include<iostream>

template <class T>
class Node{
    T data;
    Node* next;
    public:
    Node<T>();
    void set_data(T&);
    T get_data();
    void set_next(Node*);
    void print_data();
};

template <class T>
Node<T>::Node(){
    data = {};
    next = nullptr;
};

template <class T>
void Node<T>::set_data(T& data){
    this->data = data;
    return;
}

template <class T>
T Node<T>::get_data(){
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