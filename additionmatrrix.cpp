#include <iostream>
using namespace std;

int main() {
    int A[20][3], B[20][3], C[40][3];
    int i = 1, j = 1, k = 1;

    cout << "Enter rows, columns and non-zero elements of A: ";
    cin >> A[0][0] >> A[0][1] >> A[0][2];

    cout << "Enter triplet elements of A:\n";
    for (int x = 1; x <= A[0][2]; x++)
        cin >> A[x][0] >> A[x][1] >> A[x][2];

    cout << "Enter rows, columns and non-zero elements of B: ";
    cin >> B[0][0] >> B[0][1] >> B[0][2];

    cout << "Enter triplet elements of B:\n";
    for (int x = 1; x <= B[0][2]; x++)
        cin >> B[x][0] >> B[x][1] >> B[x][2];

    C[0][0] = A[0][0];
    C[0][1] = A[0][1];

    while (i <= A[0][2] && j <= B[0][2]) {

        if (A[i][0] == B[j][0] && A[i][1] == B[j][1]) {
            C[k][0] = A[i][0];
            C[k][1] = A[i][1];
            C[k][2] = A[i][2] + B[j][2];
            i++;
            j++;
            k++;
        }
        else if (A[i][0] < B[j][0] ||
                (A[i][0] == B[j][0] && A[i][1] < B[j][1])) {
            C[k][0] = A[i][0];
            C[k][1] = A[i][1];
            C[k][2] = A[i][2];
            i++;
            k++;
        }
        else {
            C[k][0] = B[j][0];
            C[k][1] = B[j][1];
            C[k][2] = B[j][2];
            j++;
            k++;
        }
    }

    while (i <= A[0][2]) {
        C[k][0] = A[i][0];
        C[k][1] = A[i][1];
        C[k][2] = A[i][2];
        i++;
        k++;
    }

    while (j <= B[0][2]) {
        C[k][0] = B[j][0];
        C[k][1] = B[j][1];
        C[k][2] = B[j][2];
        j++;
        k++;
    }

    C[0][2] = k - 1;

    cout << "\nAddition in Triplet Form:\n";
    for (int x = 0; x <= C[0][2]; x++)
        cout << C[x][0] << " "
             << C[x][1] << " "
             << C[x][2] << endl;

    return 0;
}
