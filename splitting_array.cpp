#include <iostream>
using namespace std;
int main()
{

  int n, count = 0; //count for first half
  cout<<"enter the size of array:";
  cin >> n;
  int p;
  int count2 = n / 2; //count for second half
  int m = n / 2;

  int a[n] = {};
  int b[m] = {};
  int c[p] = {};

  for (int i = 0; i < n; i++) //input array
  {

    cin >> a[i];
  }
  cout << endl;
  cout << "the elements are:";
  for (int i = 0; i < n; i++) //display
  {
    cout << a[i] << " ";
  }
  for (int j = 0; j < n / 2; j++) //for first half spilt
  {
    for (int i = count; i < n / 2; i++) //here count=0
    {
      b[j] = a[i];
      break; //for i to just take one value and come out of loop
    }
    count++; //to increase i for the next value
  }
  cout << endl;
  cout << "the elements of spillited array 1 are:";
  for (int i = 0; i < n / 2; i++) //display
  {

    cout << b[i] << " ";
  }
  for (int j = n / 2; j < n; j++) //for the next half spilt
  {
    for (int i = count2; i < n ; i++)
    {
      c[j] = a[i];
      break; // for i to take just one value
      
    }
    count2++; //increase count for the next i value
  }
  cout << endl;
  cout << "the elements of spillited array 2 are:";
  for (int i = n / 2; i < n; i++) //display
  {

    cout << c[i] << " ";
  }
}