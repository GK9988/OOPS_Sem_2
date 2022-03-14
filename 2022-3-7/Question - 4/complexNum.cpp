#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int real;
    int img;

public:
    void get()
    {
        cout << "Enter the real part: ";
        cin >> real;
        cout << endl;

        cout << "Enter the img: ";
        cin >> img;
        cout << endl;
    }

    void display()
    {
        cout << "Complex Number: " << real << " + i" << img;
    }

    Complex add(Complex ob)
    {
        Complex num;
        num.real = real + ob.real;
        num.img = img + ob.img;

        return num;
    }
};

int main()
{
}