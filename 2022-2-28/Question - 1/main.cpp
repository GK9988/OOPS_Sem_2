// Friend Functions

#include <bits/stdc++.h>
using namespace std;

class B;

class A
{
private:
    int a;

public:
    void read()
    {
        a = 2;
    }

    friend void add(A, B);
};

class B
{
private:
    int b;

public:
    void read()
    {
        b = 3;
    }
    friend void add(A, B);
};

void add(A o1, B o2)
{
    cout << o1.a + o2.b;
}

int main()
{
    A o1;
    B o2;
    o1.read();
    o2.read();
    add(o1, o2);
}