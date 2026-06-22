#include <iostream>
using namespace std;

int main()
{
    int arr[5], i;
    int largest, second;

    for(i=0; i<5; i++)
        cin >> arr[i];

    largest = second = -99999;

    for(i=0; i<5; i++)
    {
        if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    cout << second;
}