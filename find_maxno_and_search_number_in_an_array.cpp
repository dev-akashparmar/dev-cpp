#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "enter the value of n:";
  cin >> n;
  int a[n] = {};
  cout << "enter the elements in array" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cout << "the elemets in array are:";
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  int max = a[0];
  cout << "\n";
  for (int i = 0; i < n; i++)
  {
    if (a[i] >= max)
    {
      max = a[i];
    }
  }
  cout << "the max elemet is:" << max << endl;
  int x;
  cout << "enter the value you want to find:";
  int y;
  cin >> y;
  for(int j=0;j<n;j++)
  {
    if(y==a[j])
    {
      cout<<"index of the number is:"<<j<<endl;
      return 0;
    }
  }
  cout<<"number not found"<<endl;
  return 0;


}
