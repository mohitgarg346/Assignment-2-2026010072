#include <iostream>
using namespace std;

int main()
{
    int a[50][3], b[50][3];
    int n, i, j, k = 1;

    cout << "Enter number of rows, columns and non-zero elements: ";
    cin >> a[0][0] >> a[0][1] >> a[0][2];

    n = a[0][2];

    cout << "Enter triplet elements (row column value):\n";

    for (i = 1; i <= n; i++)
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }

    // Header of transpose
    b[0][0] = a[0][1];
    b[0][1] = a[0][0];
    b[0][2] = a[0][2];

    // Transpose
    for (i = 0; i < a[0][1]; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (a[j][1] == i)
            {
                b[k][0] = a[j][1];
                b[k][1] = a[j][0];
                b[k][2] = a[j][2];
                k++;
            }
        }
    }

    cout << "\nTranspose Triplet Matrix:\n";

    for (i = 0; i <= n; i++)
    {
        cout << b[i][0] << " "
             << b[i][1] << " "
             << b[i][2] << endl;
    }

    return 0;
}
