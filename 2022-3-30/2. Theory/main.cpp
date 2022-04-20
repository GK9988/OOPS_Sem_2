// Operator Overloading Using Friend Functionsg/
#include <bits/stdc++.h>
using namespace std;

class Num
{
public:
    int x;
    Num()
    {
    }
    Num(int a)
    {
        x = a;
    }
    void display()
    {
        cout << "X = " << x << endl;
    }
    friend void operator--(Num &);
};

void operator--(Num &ob)
{
    --ob.x;
}

int main()
{
    Num o1(5);
    o1.display();

    --o1;
    o1.display();
}