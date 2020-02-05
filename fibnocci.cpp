#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    int assumption=fib(n-1)+fib(n-2);
    return assumption;
}

int main()
{
    int ans=fib(2);
    cout<<ans;
    return 0;
}
