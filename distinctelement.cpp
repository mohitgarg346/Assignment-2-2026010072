#include <iostream>
using namespace std;
int main() 
{
    int n, count = 0;

    cout << "Enter size of array: ";
    cin >> n;

    int A[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) 
	{
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) 
	{
        bool distinct = true;

        for (int j = 0; j < i; j++) 
		{
            if (A[i] == A[j]) {
                distinct = false;
                break;
            }
        }

        if (distinct)
            count++;
    }

    cout << "Number of distinct elements = " << count;

    return 0;
}
