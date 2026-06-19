#include <iostream>
using namespace std;

void palindrome(int n)
{
    int original=n;
    int rev=0;

    while(n>0)
    {
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }

    if(original==rev)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
}

int main()
{
    palindrome(121);

    return 0;
}