/* print following pattern:
 *             *
 * *         * *
 * * *     * * *
 * * * * * * * *
 * * *     * * *
 * *         * *
 *             *
 */
#include <iostream>
using namespace std;
int main()
{
    int i, j, row, space;
    cin >> row;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        space = (2 * row) - (2 * i);
        for (j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (i = row; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        space = (2 * row) - (2 * i);
        for (j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}