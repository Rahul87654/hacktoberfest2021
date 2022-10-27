#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int a,b,c=0;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"You entered "<<a<<endl;
    while(a>0)
    {
        b=a%10;
        c=c+b;
        a=a/10;
    }
    cout<<"Sum of digits of number = "<<c<<endl;

    return 0;
}

