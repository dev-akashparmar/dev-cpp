#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    while (n == m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i != j)
                {
                    if (a[i][j] == a[j][i])
                    {

                        count++;
                    }
                }
            }
        }
        cout << "count is:" << count << endl;
        if (count == (n * n - n))
        {
            cout << "it is a symmetric matrix:";
        }
        else
        {
            cout << "it is not a symmetric matrix:";
        }
    }
    cout << "enter right input";
}