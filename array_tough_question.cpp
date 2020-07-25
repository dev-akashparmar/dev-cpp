#include <iostream> //Take an array of length n where all the numbers are nonnegative and unique. Find the element in the array possessing the highest value. Split the element into two parts where first part contains the next highest value in the array and second part hold the required additive entity to get the highest value. Print the array where the highest value get splitted into those two parts.
                    //Sample input: 4 8 6 3 2
                    //Sample output: 4 6 2 6 3 2
using namespace std;
int main()
{
  int n;
  cout<<"enter the value of n:";
  cin >> n;
  int index; //for spilting highest term into 2

  int a[n] = {}; //actual array
  int b[n + 1] = {}; //final array
  for (int i = 0; i < n; i++) 
  {

    cin >> a[i];
  }
  cout << "the elements are:";
  for (int i = 0; i < n; i++) //displaying elements of first array
  {
    cout << a[i] << " ";
  }
  int max = a[0];

  for (int i = 0; i < n; i++) //finding max element
  {
    if (a[i] > max)
    {
      max = a[i];
    }
  }
  cout << endl;

  cout << "max element is:" << max << endl;
  for (int j = 0; j < n; j++) //finding index of max element
  {
    if (max == a[j])
    {
      cout << "index of the maximun number is:" << j << endl;
      index = j;
    }
  }
  int max2 = a[0];
  for (int i = 0; i < n; i++) //finding second max element
  {
    if ((a[i] < max) && (a[i] > max2))
    {
      max2 = a[i];
    }
  }
  cout << "second max element is:" << max2 << endl;
  for (int i = 0; i < n; i++) //copying elements of array one into final array
  {
    b[i] = a[i];
  }
  
  cout << endl;
  b[index] = max2; //changing value of max into max2 
  b[index + 1] = max - max2; //as per question
  cout << "final array is:";
  for (int i = index + 2; i < n + 1; i++) // deciding input after index+1 as before that we have already done till b[index+1]
  {
    b[i] = a[i - 1]; //as highest term spilts into 2 we occupy 2 indexes in array, so we need to copy the array from index i-1
  }
  for (int i = 0; i < n + 1; i++) //displaying
  {
    cout << b[i] << " ";
  }
}