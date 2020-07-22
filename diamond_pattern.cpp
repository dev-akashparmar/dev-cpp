#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter the value of n:";
    cin >> n;

    int count = n - 1; //for spacing before printing star

    for (int i = 0; i < n; i++)
    {
        for (int m = 0; m < count; m++) //loop for spacing before printing star
        {
            cout << " ";
        }

        for (int j = 0; j < n; j++)
        {

            if (i >= j) //to print stars in lower diagonal matrix
                cout << "* "; //imp space after * for the pattern
            else
            {
                cout << " ";
            }
        }
        cout << endl;
        count--; //reducing count for proper spacing
    }
    int count_2 = n - 1; //count for spacing in down pattern
    for (int i = 0; i < n - 1; i++) //n-1 for proper pattern
    {
        for (int m = 0; m < i; m++) //loop for spacing
        {
            cout << " ";
        }
        for (int j = 0; j < n - 1; j++) //for printing down pattern
        {
            if (i + j < n - 1) //for printing down pattern
                cout << " *";  //imp spacing
        }
        cout << endl;
        count_2--; 
    }
}
