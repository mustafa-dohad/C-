// check if the number is prime or not //
#include <iostream>
using namespace std;
int main()
{
    int n, flag = 0;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % 1 == 0)
        {
            cout << "Non Prime" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Prime Number" << endl;
    }
    return 0;
}