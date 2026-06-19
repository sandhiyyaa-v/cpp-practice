#include <iostream>
using namespace std;

void prime(int n)
{
    int count=0;

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }

    if(count==2)
        cout<<"Prime";
    else
        cout<<"Not Prime";
}

int main()
{
    prime(7);

    return 0;
}