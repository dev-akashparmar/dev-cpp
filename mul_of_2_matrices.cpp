
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int r1, c1;
    int r2, c2;

    cout << "enter the value of row and coloum of first matrix:" << endl;
    cin >> r1 >> c1;
    cout << "enter the value of row and coloum of second matrix:" << endl;
    cin >> r2 >> c2;

    int a[r1][c1];
    int b[r2][c2];
    int z[r1][c2];

    if (c1 != r2)
    {
        cout << "enter correct dimensions of matrices" << endl;
    }
    else
    {
        cout << "enter the elements of first matrix" << endl; //taking input
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << "enter the elements of second matrix" << endl; //taking input
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cin >> b[i][j];
            }
        }
        cout << "the first matrix is:" << endl;
        for (int i = 0; i < r1; i++) //displaying matrix
        {
            for (int j = 0; j < c1; j++)
            {
                cout << a[i][j] << " "; //for spacing
            }
            cout << endl;
        }
        cout << "the second matrix is:" << endl;
        for (int i = 0; i < r2; i++) //displaying matrix
        {
            for (int j = 0; j < c2; j++)
            {
                cout << b[i][j] << " "; //for spacing
            }
            cout << endl;
        }

        for (int i = 0; i < r1; i++) // for respective row of first matrix
        {
            for (int j = 0; j < c2; j++) //with  repective coloum of second matrix
            {
                z[i][j] = 0; //matrix initialization to 0

                for (int k = 0; k < c1; k++) //moving within desired row and coloum
                {
                    z[i][j] = a[i][k] * b[k][j] + z[i][j];
                }
            }
        }
        cout << "the final obtained matrix is:" << endl;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << z[i][j] << " ";
            }
            cout << endl;
        }
    }
}
