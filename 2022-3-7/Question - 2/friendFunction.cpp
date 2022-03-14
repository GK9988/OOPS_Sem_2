#include <bits/stdc++.h>
using namespace std;

class B;
class C;
class D;

class A
{
    int a;

public:
    void get()
    {
        cout << "Enter marks 1: ";
        cin >> a;
        cout << endl;
    }
    friend void friendFun(A &, B &, C &, D &);
};

class B
{
    int a;

public:
    void get()
    {
        cout << "Enter marks 2: ";
        cin >> a;
        cout << endl;
    }
    friend void friendFun(A &, B &, C &, D &);
};
class C
{
    int a;

public:
    void get()
    {
        cout << "Enter marks 3: ";
        cin >> a;
        cout << endl;
    }
    friend void friendFun(A &, B &, C &, D &);
};

class D
{
    int total;

public:
    void display()
    {
        cout << endl;
        cout << "Total Marks: " << total;
    }
    friend void friendFun(A &, B &, C &, D &);
};

void friendFun(A &ob1, B &ob2, C &ob3, D &ob4)
{
    ob4.total = ob1.a + ob2.a + ob3.a;
}

int main()
{
    A ob1;
    ob1.get();
    B ob2;
    ob2.get();
    C ob3;
    ob3.get();

    D ob4;

    friendFun(ob1, ob2, ob3, ob4);

    ob4.display();
}