#include <bits/stdc++.h>
using namespace std;

class Student
{
    string stuName;
    int stuRollNo;
    float stuHeight;
    float stuWeight;

public:
    Student()
    {
        cout << endl
             << "Contructor called" << endl;

        cout << "Enter Student Name: ";
        cin >> stuName;
        cout << endl;

        cout << "Enter Student Roll No.: ";
        cin >> stuRollNo;
        cout << endl;

        cout << "Enter Student Height: ";
        cin >> stuHeight;
        cout << endl;

        cout << "Enter Student Weight: ";
        cin >> stuWeight;
        cout << endl;
    }

    Student(Student &ob)
    {
        cout << endl
             << "Copy Constructor Called" << endl;
        stuName = ob.stuName;
        stuRollNo = ob.stuRollNo;
        stuHeight = ob.stuHeight;
        stuWeight = ob.stuWeight;
    }

    void display()
    {
        cout << "Student Name: " << stuName << endl;
        cout << "Student Roll No.: " << stuRollNo << endl;
        cout << "Student Height: " << stuHeight << endl;
        cout << "Student weight: " << stuWeight << endl;
    }

    ~Student()
    {
        cout << endl
             << endl
             << "Program Finished, Destructor Called.";
    }
};

int main()
{
    Student st1;

    cout << endl
         << "Details of entered student Data: " << endl;
    st1.display();

    Student st2(st1);

    cout << endl
         << "Details of copioed Student" << endl;

    st2.display();
}