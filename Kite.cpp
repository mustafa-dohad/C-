/* print the following pattern:
                                     *
                                   * * *
                                 * * * * *
                               * * * * * * *
                               * * * * * * *
                                 * * * * *
                                   * * *
                                     *

*/
#include <iostream>
using namespace std;
int main()
{
    int i, j, n, k;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 2 * (n - i) - 1; j++)
        {
            cout << " ";
        }
        for (k = 0; k < 2 * i + 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (i = 0; i < n; i++)
    {
        cout << " ";
        for (j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }
        for (k = 0; k < 2 * (n - i) - 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}