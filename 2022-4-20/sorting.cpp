#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size : ";
    cin >> size;

    int arr[size];
    cout << "Enter the values : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // outer loop for the passes
    for (int i = 0; i < size - 1; i++)
    {
        // Inner loop for the sorting
        for (int j = 1; j < size - 1 - i; j++)
        {
            if (arr[j] < arr[j - 1])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }

    cout << "Array after sorting : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        cout << " ";
    }

    return 0;
}