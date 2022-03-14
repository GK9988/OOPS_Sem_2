#include <bits/stdc++.h>
using namespace std;

class A
{
    int num1, num2;
    int sum;

public:
    A()
    {
        cout << "Enter Number 1: ";
        cin >> num1;
        cout << endl;

        cout << "Enter Number 2: ";
        cin >> num2;
        cout << endl;
    }

    inline void add()
    {
        sum = num1 + num2;
    }

    void display()
    {
        cout << "Num 1: " << num1 << " Num 2: " << num2 << endl;
    }

    void sumDisplay()
    {
        cout << "Sum: " << sum;
    }
};

int main()
{
    A obTest;
    obTest.display();
    obTest.add();
    obTest.sumDisplay();
}