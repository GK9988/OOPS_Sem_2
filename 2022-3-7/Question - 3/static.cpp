#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    static int counter;

    static void counterInc()
    {
        counter++;
    }
    void display()
    {
        cout << "Counter Value: " << counter << endl;
    }
};

int A::counter = 0;

int main()
{
    A oMain, oDisplay;

    oDisplay.display();
    oMain.counterInc();

    oDisplay.display();
    oMain.counterInc();

    oDisplay.display();
    oMain.counterInc();

    oDisplay.display();
    oMain.counterInc();
}