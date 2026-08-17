#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[n - 1];

    cout << "Enter " << n - 1 << " elements: ";
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    int sum = n * (n + 1) / 2;
    int arrSum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        arrSum += arr[i];
    }

    int missing = sum - arrSum;

    cout << "Missing number is: " << missing;

    return 0;
}
