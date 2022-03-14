/*
1. Add two Complex Number
*/

#include <bits/stdc++.h>
using namespace std;

class ComplexNumber
{
    int real;
    int img;

public:
    void read()
    {
        cout << "Enter the Real Part of the number: ";
        cin >> real;
        cout << endl;

        cout << "Enter the Imaginary Part of the number: ";
        cin >> img;
        cout << endl;
    }

    void display()
    {
        cout << "The complex Number is: " << real << " + " << img << "i" << endl;
    }

    ComplexNumber add(ComplexNumber *num)
    {
        ComplexNumber newNum;
        newNum.real = real + num->real;
        newNum.img = img + num->img;
        return newNum;
    }
};

int main()
{
    ComplexNumber num1, num2, num3;

    num1.read();
    num1.display();

    num2.read();
    num2.display();

    num3 = num1.add(&num2);
    cout << endl;
    num3.display();
}