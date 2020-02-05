#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
        return 1;
    int assumption=fact(n-1);
    int ans=n*assumption;
    return ans;
}


int main()
{
    int n;
    cout<<"ENTER THE NUMBER:";
    cin>>n;
    int ans=fact(n);
    cout<<"THE FACTORIAL OF "<<n<<" IS:  "<<ans;
    return 0;

}
