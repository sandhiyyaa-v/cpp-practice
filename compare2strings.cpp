#include <iostream>
using namespace std;

int main()
{
    string str1, str2;

    cin >> str1;
    cin >> str2;

    if(str1 == str2)
        cout << "Equal";
    else
        cout << "Not Equal";

    return 0;
}