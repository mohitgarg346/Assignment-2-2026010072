#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int n = 8;
    int target = 10;
    int start = 0;
    int end = n-1;
    int result = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == target)
        {
            result = mid;
            break;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if (result != -1)
    {
        cout << "Number index " << result << " par mila" << endl;
    }
    else
    {
        cout << "Number nhi mila " << endl;
    }

    return 0;
}
