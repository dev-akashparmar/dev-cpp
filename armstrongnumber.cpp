#include<iostream>
using namespace std;
int main()
{
    int n,r,sum=0,m=0;
    cout<<"enter a number"<<endl;
    cin>>n;
    m=n;
    
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=(sum)+(r*r*r);
        cout<<"r is"<<r<<endl;
        cout<<sum<<endl;
        
    }
    cout<<"sum is "<<sum<<endl;
    cout<<"m is"<<m<<endl;
    if(sum==m)
    cout<<"armstrong"<<endl;
    else
    {
        cout<<"try again"<<endl;
    }
    
    
    
}
    