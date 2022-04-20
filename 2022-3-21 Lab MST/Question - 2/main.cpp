#include <bits/stdc++.h>
using namespace std;

class A
{
    int a;
    int b;

public:
    A()
    {
        cout << "Default Constructor Triggered";
        a = 2;
        b = 3;
    }
    A(int x, int y)
    {
        cout << "Parameterized Constructor Triggered: ";
        a = x;
        b = y;
    }
    A(A &ob)
    {
        cout << "Copy Constructor Triggered";
        a = ob.a;
        b = ob.b;
    }

    void display()
    {
        cout << "A = " << a << endl;
        cout << "B = " << b << endl;
    }
};

int main()
{
    A ob1;
    cout << endl;
    ob1.display();

    A ob2(3, 4);
    cout << endl;
    ob2.display();

    A ob3(ob2);
    cout << endl;
    ob3.display();
}