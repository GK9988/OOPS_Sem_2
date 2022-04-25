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
        }
        catch (...)
        {
            cout << endl
                 << "Zero Error inner Exception" << endl;
            throw n;
        }
    }
    catch (...)
    {
        cout << endl
             << "Zero Error outer Exception" << endl;
    }
}
