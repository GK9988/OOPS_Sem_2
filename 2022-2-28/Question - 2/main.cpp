// using static class members and static functions
#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    static int x;

    void read()
    {
        x++;
    }

    static void display()
    {
        cout << x << endl;
    }
};

int A::x = 0;

int main()
{
    A o, o1;
    o.read();
    o.display();
    o1.read();
    o.display();
    o.read();
    A::display();
}