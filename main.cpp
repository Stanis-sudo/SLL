#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include "sl_list.h"
using std::cout, std::cin, std::endl;

int main()
{
    cout << "Singly Linked List" << endl;
    int *i = new (int);
    *i = 5;
    cout << "i = " << i << "  *i = " << *i << endl;
    //______________________________________________//

    SL_List<int> ll;
    int t = 2;
    ll.push_back(t);
    cout << "Front = " << ll.front() << endl;
    t = 3;
    ll.push_back(t);
    cout << "Front = " << ll.front() << endl;
    cout << "Back = " << ll.back() << endl;
    t = 1;
    ll.push_front(t);
    t = 0;
    ll.insert(t, 0);
    t =5;
    ll.insert(t, 4);
    //ll.print();
    t = 4;
    ll.insert(t, 4);
    //ll.print();
    t = 7;
    ll.insert(t, 6);
    //ll.print();
    t = 522;
    ll.insert(t, 3);
    //ll.print();
    t = 8;
    ll.insert(t, 7);
    ll.print();
    cout << "For each loop : " << endl;
    for (auto a : ll) cout << a << endl;
    ll.pop_back();
    ll.print();
    ll.pop_back();
    ll.print();
    ll.pop_front();
    ll.pop_front();
    ll.print();
/*
    ll.print();
    SL_List<std::string> str;
    std::string s = "AAA";
    str.push_back(s);
    s = "AAB";
    str.push_back(s);
    s = "ABB";
    str.push_front(s);
    s = "BBB";
    str.push_front(s);
    str.print();*/

}