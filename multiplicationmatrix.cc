#include <iostream>
using namespace std;

int main()
{
    int a[20][3], b[20][3], c[50][3];
    int i, j, k;
    int m, n, p, q;
    int count = 0;

    cout << "Enter rows and columns of first matrix: ";
    cin >> m >> n;

    cout << "Enter rows and columns of second matrix: ";
    cin >> p >> q;

    if (n != p)
    {
        cout << "Matrix multiplication is not possible.";
        return 0;
    }

    cout << "Enter number of non-zero elements of first matrix: ";
    cin >> a[0][2];

    a[0][0] = m;
    a[0][1] = n;

    cout << "Enter row, column and value:\n";

    for (i = 1; i <= a[0][2]; i++)
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }

    cout << "Enter number of non-zero elements of second matrix: ";
    cin >> b[0][2];

    b[0][0] = p;
    b[0][1] = q;

    cout << "Enter row, column and value:\n";

    for (i = 1; i <= b[0][2]; i++)
    {
        cin >> b[i][0] >> b[i][1] >> b[i][2];
    }

    c[0][0] = m;
    c[0][1] = q;

    for (i = 1; i <= a[0][2]; i++)
    {
        for (j = 1; j <= b[0][2]; j++)
        {
            if (a[i][1] == b[j][0])
            {
                int row = a[i][0];
                int col = b[j][1];
                int value = a[i][2] * b[j][2];

                int found = 0;

                for (k = 1; k <= count; k++)
                {
                    if (c[k][0] == row && c[k][1] == col)
                    {
                        c[k][2] = c[k][2] + value;
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    count++;
                    c[count][0] = row;
                    c[count][1] = col;
                    c[count][2] = value;
                }
            }
        }
    }

    c[0][2] = count;

    cout << "\nResultant Sparse Matrix:\n";
    cout << "Row Column Value\n";

    for (i = 0; i <= count; i++)
    {
        cout << c[i][0] << "    "
             << c[i][1] << "     "
             << c[i][2] << endl;
    }

    return 0;
}
