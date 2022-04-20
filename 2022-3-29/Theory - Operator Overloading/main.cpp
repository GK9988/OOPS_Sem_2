/*
Operator Overloading
It can be done by:
    1. With member functions of class
        Unary Operator: 0 Arguement
        Binary Operator: 1 Arguement
    2. Friend Function
        Unary Operator: 1 Arguement
        Binary Operator: 2 Arguement
*/

// Operator overloading using member functions
// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

class num
{
public:
    int x, y;

    num()
    {
    }
    num(int j, int k)
    {
        x = j;
        y = k;
    }
    void show()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << endl;
    }
    num operator+(num ob)
    {
        num t;
        t.x = this->x + ob.x;
        t.y = this->y + ob.y;
        return t;
    }
};

int main()
{
    num o1(1, 2), o2(2, 3), o3;
    o1.show();

    o2.show();

    o3 = o1 + o2;
    o3.show();
    return 0;
}