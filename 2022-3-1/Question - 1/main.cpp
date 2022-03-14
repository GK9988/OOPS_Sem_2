// Friend Functions
#include <bits/stdc++.h>

using namespace std;
class first;
class second
{
    int b;

public:
    void show(first ob)
    {
        cout << ob.a;
        // accessing private members of first;
    }
};
class first
{
    friend class second;
    int a;
};

int main()
{
}