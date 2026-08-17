#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;

    cout << "Enter number of strings: ";
    cin >> n;

    string str[100];

    cout << "Enter strings:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    sort(str, str + n);

    cout << "Strings in alphabetical order:" << endl;

    for (int i = 0; i < n; i++) {
        cout << str[i] << endl;
    }

    return 0;
}
