#include <iostream>
using namespace std;

int maximum(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    cout<<maximum(10,20);

    return 0;
}