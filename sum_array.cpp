#include<iostream>
using namespace std;

int add(int a[],int n,int i=0)
{
  if(i==n-1)
    return a[n-1];
  int ans=a[i]+add(a,n,i+1);
  return ans;
}


int main()
{
    int a[]={1,2,4,3,5};
    int n=sizeof(a)/sizeof(int);
    int ans=add(a,n);
    cout<<ans<<endl;
    return 0;

}
