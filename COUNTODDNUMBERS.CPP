#include <iostream>
using namespace std;

int main()
{
    int arr[5], i, count = 0;

    for(i=0; i<5; i++)
        cin >> arr[i];

    for(i=0; i<5; i++)
    {
        if(arr[i] % 2 != 0)
            count++;
    }

    cout << count;
}