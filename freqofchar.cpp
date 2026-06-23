#include <iostream>
using namespace std;

int main()
{
    string str;
    char ch;

    getline(cin, str);
    cin >> ch;

    int count = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}