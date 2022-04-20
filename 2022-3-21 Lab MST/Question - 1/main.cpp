#include <bits/stdc++.h>
using namespace std;

class A
{
    static int arr[2];

public:
    static void aIncrement()
    {
        cout << endl
             << "Incrementing A" << endl;
        arr[0]++;
    }
    static void bIncrement()
    {
        cout << endl
             << "Incrementing B" << endl;
        arr[1]++;
    }
    void display()
    {
        cout << "A = " << arr[0] << endl
             << "B = " << arr[1];
    }
};

int A::arr[2] = {0, 0};

int main()
{
    A ob1, ob2, ob3;

    ob3.display();
    cout << endl;
    ob1.aIncrement();
    ob2.bIncrement();

    ob3.display();
    cout << endl;
    ob1.aIncrement();
    ob2.bIncrement();

    ob3.display();
    cout << endl;
    ob1.bIncrement();

    ob3.display();
    cout << endl;
}
