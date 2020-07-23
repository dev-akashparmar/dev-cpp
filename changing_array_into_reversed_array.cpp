
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of array:";
    cin >> n;
    int count = n - 1;
    int a[n] = {};
    int c[n] = {};
    for (int i = 0; i < n; i++) //entering first array
    {
        cin >> a[i];
    }
    cout << "the first array is:" << endl;

    for (int i = 0; i < n; i++) //displaying first array
    {
        cout << a[i] << " ";
    }
    cout << endl;

    for (int j = 0; j < n; j++) // making reversed array
    {

        for (int i = count; i >= 0; i--) //for i to start from back
        {
            c[j] = a[i];

            break; //to come out of loop as i take just one value i.e i=count
        }
        count--; // now i becomes count-1 and the process comtinues
    }
    cout << "the reversed array is:"; //displaying
    for (int j = 0; j < n; j++)
    {
        cout << c[j] << " ";
    }
}
