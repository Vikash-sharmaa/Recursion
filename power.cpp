#include<iostream>
using namespace std;

int power(int n,int x)
{
    if(x==0)
    {
        return 1;
    }
    int assumption=n*power(n,x-1);
    return assumption;
}
int main()
{
    int n,x;
    cout<<"ENTER THE VALUES OF n AND x";
    cin>>n>>x;
    int ans=power(n,x);
    cout<<ans;
    return 0;
}
