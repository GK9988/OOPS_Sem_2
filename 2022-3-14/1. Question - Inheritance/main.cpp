#include <bits/stdc++.h>
using namespace std;

class BaseClass
{
    string priv = "I am Private String";

protected:
    string prot = "I am Protected String";

public:
    string pub = "I am Public String";
};

class Child1 : private BaseClass
{

public:
    void getData()
    {
        cout << endl
             << prot << endl
             << pub << endl;
    }
};

class Child2 : protected BaseClass
{
public:
    void getData()
    {
        cout << endl
             << prot << endl
             << pub << endl;
    }
};

class Child3 : public BaseClass
{
public:
    void getData()
    {
        cout << endl
             << prot << endl
             << pub << endl;
    }
};

int main()
{
    Child1 ob1;
    Child2 ob2;
    Child3 ob3;

    ob1.getData();
    ob2.getData();
    ob3.getData();
}