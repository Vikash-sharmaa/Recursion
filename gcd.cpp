#include<iostream>>
using namespace std;


int gcd(int m,int n)
{

    if(m%n==0)
    {
        return n;
    }
    else
        return gcd(n,m%n);

}



int main()
{
    int m,n;
    cout<<"ENTER THE NUMBERS WHOSE GCD IS TO BE FOUND :"<<endl;
    cin>>m>>n;
    int k=gcd(m,n);
    cout<<"GCD OF "<<m<<" AND "<<n<<" is "<<k;
    return 0;

}
