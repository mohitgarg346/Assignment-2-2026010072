#include <iostream>
using namespace std;
int main() 
{
    int rows, cols;

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int matrix[100][100];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            cin >> matrix[i][j];
        }
    }

    cout << "Transpose of the matrix:\n";
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) 
		{
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
