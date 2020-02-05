#include<iostream>
using namespace std;
int addd(int *a,int n,int i=0)
{
    if(i==n-1)

    {
        return a[n-1];
    }

    int ans=a[i]+addd(a+1,n,i+1);
    return ans;


}








int main()
{
    int arr[5];
    int n=sizeof(arr)/sizeof(*arr);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int summ=addd(arr,n);
    cout<<"THE SUM OF THE ARRAY ELEMENT IS:  "<<summ;
    return 0;
}
