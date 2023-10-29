// print factorial of n -> user defined numbers //
#include <iostream>
using namespace std;

int Fact(int num)
{
    int fact = 1, i;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n;
    cin >> n;
    cout << "Factorial of " << n << " is: " << Fact(n) << endl;
    return 0;
}