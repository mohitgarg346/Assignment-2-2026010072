#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int a[10][10];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Tri-Diagonal Matrix:\n";
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            if (i == j || i == j + 1 || i == j - 1)
                cout << a[i][j] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}
