#include <bits/stdc++.h>
using namespace std;

void check(int n) throw(int)
{
    if (n == 0)
    {
        throw n;
    }
    else if (n == 1)
    {
        throw(char) n;
    }
    else
    {
        throw(float) n;
    }
}

int main()
{
    int n;
    cin >> n;
    try
    {
        check(n);
    }
    catch (int)
    {
        cout << "int";
    }
    catch (float)
    {
        cout << "Float";
    }
    catch (char)
    {
        cout << "char";
    }
}