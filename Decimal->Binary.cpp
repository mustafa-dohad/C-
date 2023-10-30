/*
   convert user given decimal to binary
*/
#include <iostream>
#include <cmath>
using namespace std;

long long Convert(int num)
{
    long long bin=0;
    int r, total = 0, i = 1;
    while (num != 0)
    {
        r = num % 2;
        num = num / 2;
        total += r * i;
        i *= 10;
    }
    return total;
}

int main()
{
    int n;
    cin >> n;
    cout << n << " in decimal = " << Convert(n) << " in binary";
    return 0;
}