#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int count = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            count++;
        }
    }

    cout << count;

    return 0;
}