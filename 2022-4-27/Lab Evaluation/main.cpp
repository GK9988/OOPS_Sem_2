/*
use the concept of classes and object:
WAP to implement:
    1. Class
    2. Object
    3. New
    4. Delete
    5. Apply Bubble Sort
*/

#include <bits/stdc++.h>
using namespace std;

class Student
{
    int rollNo;
    string name;
    int age;

public:
    Student()
    {
    }
    Student(int a, string b, int c)
    {
        rollNo = a;
        name = b;
        age = c;
    }
    void setData()
    {
        cout << "Enter the Student's Roll No.: ";
        cin >> rollNo;
        cout << endl;

        cout << "Enter the Student's Name : ";
        cin >> name;
        cout << endl;

        cout << "Enter the Student's age: ";
        cin >> age;
        cout << endl;
    }

    void displayData()
    {
        cout << endl;
        cout << "Student's Roll NO: " << rollNo << endl;
        cout << "Student's Name: " << name << endl;
        cout << "Student's Age: " << age << endl;
        cout << endl;
    }
    int operator>(Student ob)
    {
        if (rollNo > ob.rollNo)
            return 1;
        return 0;
    }
};

void bubbleSort(Student *arr, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

int main()
{
    Student *arr;
    int n;
    cout << endl
         << "Enter the number of students of which you want to enter the details: " << endl;
    cin >> n;
    arr = new Student[n];

    cout << endl
         << "****** Enter Student Details ******" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the details of Student: " << i + 1 << endl;
        arr[i].setData();
        cout << endl;
    }

    cout << endl
         << "****** Unsorted Data Display ******" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Student: " << i + 1;
        arr[i].displayData();
        cout << endl;
    }

    bubbleSort(arr, n);

    cout << endl
         << "****** Sorted Data Display ******" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Student: " << i + 1;
        arr[i].displayData();
        cout << endl;
    }
}