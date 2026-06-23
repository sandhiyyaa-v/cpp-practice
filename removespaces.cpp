#include <iostream>
using namespace std;

int main()
{
    string str;

    getline(cin, str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ')
        {
            cout << str[i];
        }
    }

    return 0;
}