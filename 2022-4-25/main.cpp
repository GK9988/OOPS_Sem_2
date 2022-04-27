#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Value of n: ";
    cin >> n;
    cout << endl;

    try
    {
        try
        {
            if (n == 0)
            {
                throw n;
            }
            if (n == 1)
            {
                throw 'c';
            }
            cout << endl
                 << "Correct Value Entered" << endl;
        }
        catch (int)
        {
            cout << endl
                 << "Zero Error inner Exception" << endl;
            throw 1;
        }
        catch (char)
        {
            cout << endl
                 << "1 to Char Error" << endl;
            throw "C";
        }
    }
    catch (...)
    {
        cout << endl
             << "outer Exception" << endl;
    }
}
