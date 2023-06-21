#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include "sl_list.h"
using namespace std;
using std::cout, std::cin, std::endl;

TEST(SL_List_, Front)
{
    SL_List<int> test;
    int t = 2;
    test.push_front(t);
    EXPECT_EQ(test.front(), 2);
    t = 3;
    test.push_front(t);
    EXPECT_EQ(test.front(), 3);
    t = 4;
    test.push_front(t);
    EXPECT_EQ(test.front(), 4);
    t = 5;
    test.push_back(t);
    EXPECT_EQ(test.front(), 4);
    test.pop_front();
    EXPECT_EQ(test.front(), 3);
    test.pop_front();
    EXPECT_EQ(test.front(), 2);
    test.pop_front();
    EXPECT_EQ(test.front(), 5);
}
TEST(SL_List_, Back)
{
    SL_List<int> test;
    int t = 2;
    test.push_front(t);
    EXPECT_EQ(test.back(), 2);
    t = 3;
    test.push_back(t);
    EXPECT_EQ(test.back(), 3);
    t = 4;
    test.push_back(t);
    EXPECT_EQ(test.back(), 4);
    t = 5;
    test.push_front(t);
    EXPECT_EQ(test.back(), 4);
    test.pop_back();
    EXPECT_EQ(test.back(), 3);
    test.pop_back();
    EXPECT_EQ(test.back(), 2);
    test.pop_back();
    EXPECT_EQ(test.back(), 5);
}

int main(int argc, char **argv)
{
    /*cout << "Singly Linked List" << endl;
    /*int *i = new (int);
    *i = 5;
    cout << "i = " << i << "  *i = " << *i << endl;*/
    //______________________________________________//

    /*SL_List<int> ll;
    int t = 2;
    ll.push_back(t);
    cout << "Front = " << ll.front() << endl;
    t = 3;
    ll.push_back(t);
    cout << "Front = " << ll.front() << endl;
    cout << "Back = " << ll.back() << endl;
    cout << "Size = " << ll.size() << endl;*/

    /* t = 1;
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
     ll.print();*/
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
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}