/*
   convert user given binary to decimal
*/
#include <iostream>
#include <cmath>
using namespace std;

int Convert(long long num)
{
    int r, total = 0, i = 0;
    while (num != 0)
    {
        r = num % 10;
        num = num / 10;
        total += pow(8, i) * r;
        i++;
    }

    return total;
}

int main()
{
    long long n;
    cin >> n;
    cout << n << " in octal = " << Convert(n) << " in decimal";
    return 0;
}