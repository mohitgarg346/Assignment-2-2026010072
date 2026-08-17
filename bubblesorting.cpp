#include <iostream>
using namespace std;

int main()
{
    int a[7] = {64, 34, 25, 12, 22, 11, 90};

    for(int i = 0; i < 7; i++)
    {
        for(int j = 0; j < 6 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";

    for(int i = 0; i < 7; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
