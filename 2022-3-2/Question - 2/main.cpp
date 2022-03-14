/*
Find Average of three numbers using friend functions
*/

#include <bits/stdc++.h>
using namespace std;

class B;
class C;
class D;

class A
{
    int marks;
    int totalMarks;

public:
    void read()
    {
        cin >> marks;
    }
    friend D Add(A, B, C);
};

class B
{
    int marks;
    int totalMarks;

public:
    void read()
    {
        cin >> marks;
    }
    friend D Add(A, B, C);
};

class C
{
    int marks;
    int totalMarks;

public:
    void read()
    {
        cin >> marks;
    }
    friend D Add(A, B, C);
};

class D
{

    float average;

public:
    void display()
    {
        cout << "Average of The marks: " << average;
    }
    friend D Add(A, B, C);
};

D Add(A a, B b, C c)
{
    D d;
    d.average = (a.marks + b.marks + c.marks) / 3;
    return d;
}

int main()
{
    A a;
    B b;
    C c;
    D d;

    a.read();
    b.read();
    c.read();

    cout << endl;

    d = Add(a, b, c);
    d.display();
}