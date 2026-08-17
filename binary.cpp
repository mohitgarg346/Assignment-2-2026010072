#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 5, 6};
    int n = 6;
    cout << "Missing number is: " << findMissing(arr, n);
int findMissing(int arr[], int n)
{
    int low = 0, high = n - 2;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == mid + 1)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return low + 1;
    return 0;
}
}
