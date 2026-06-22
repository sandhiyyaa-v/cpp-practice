#include <iostream>
using namespace std;

int main()
{
    int arr[5], key, i;

    for(i=0; i<5; i++)
        cin >> arr[i];

    cin >> key;

    for(i=0; i<5; i++)
    {
        if(arr[i] == key)
        {
            cout << "Found";
            return 0;
        }
    }

    cout << "Not Found";
}