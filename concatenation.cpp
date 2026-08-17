#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    cout << "First string: " << str1 << endl;
    cout << "Second string: " << str2 << endl;

    str1 = str1 + str2;

    cout << "Concatenated string: " << str1;

    return 0;
}
