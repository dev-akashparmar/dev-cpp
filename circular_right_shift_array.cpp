#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[n]={};
  for (int i = 0; i < n; i++) 
  {

    cin >> a[i];
  }
 int temp=a[n-1]; //for replacing it with a[0]
  cout << "the elements are:";
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  
  for(int i=n-1;i>=0;i--) //this gives the value of all except a[0]
  {
    a[i]=a[i-1];
  }
  a[0]=temp; //replacing
  cout<<endl;
  cout<<"reversed is:";
  
  for (int i = 0; i < n; i++) //final array
  {
    cout << a[i] << " ";
  }

}