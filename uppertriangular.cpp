#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[10][10];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    cout << "Upper Triangular Matrix:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j)
                cout << a[i][j] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}
