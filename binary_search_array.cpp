#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of array:";
    cin >> n;
    int a[n] = {};
    cout << "enter the elements of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "the elements of array are:";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    int l = 0, h = n - 1, m, x;
    cout << "\n";
    cout << "enter the element you want to find:";
    cin >> x;

    while (l <= h) //if l becomes greater than h then number not found
    {
        m = (l + h) / 2;
        if (x == a[m])
        {
            cout << "the index of the element is:" << m;
            return 0; //to stop the loop as number is found
        }
        else if (x < a[m])
        {

            h = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    cout << "number not  found" << endl; //outside of while loop
}
