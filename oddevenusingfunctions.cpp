#include <iostream>
using namespace std;

void evenOdd(int n)
{
    if(n%2==0)
        cout<<"Even";
    else
        cout<<"Odd";
}

int main()
{
    evenOdd(8);

    return 0;
}