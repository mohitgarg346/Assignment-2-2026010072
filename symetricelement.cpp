#include <iostream>
using namespace std;

int main() {
    int n, a[10][10];
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    bool symmetric = true;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = false;
                break;
            }
        }
    }

    if (symmetric)
        cout << "Symmetric Matrix";
    else
        cout << "Not a Symmetric Matrix";

    return 0;
}
