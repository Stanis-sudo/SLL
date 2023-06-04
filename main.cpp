#include <iostream>
#include "sll_node.h"
using std::cout, std::cin, std::endl;

int main(){
    cout << "Singly Linked List" << endl;
    int* i = new (int);
    *i = 5;
    cout << "i = " << i << "  *i = " << *i << endl;
    Node<int> node1;
    Node<int> node2;
    int x = 5;
    cout << "Node node1 address = " << &node1 << endl;
    cout << "Node node2 address = " << &node2 << endl;
    node1.set_data(x);
    node1.print_data();
    node1.set_next(&node2);
}