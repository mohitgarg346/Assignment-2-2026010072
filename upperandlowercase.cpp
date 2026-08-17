#include <iostream>
#include <cctype>
using namespace std;

int main() 
{
    char ch;

    cout << "Enter an uppercase character: ";
    cin >> ch;

    cout << "Uppercase character: " << ch << endl;

    ch = tolower(ch);

    cout << "Lowercase character: " << ch;

    return 0;
}
