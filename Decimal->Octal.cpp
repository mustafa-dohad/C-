/*
   convert user given decimal to octal
*/
#include <iostream>
#include <cmath>
using namespace std;

int Convert(int num)
{
    int r, total = 0, i = 1;
    while (num != 0)
    {
        r = num % 8;
        num = num / 8;
        total += r * i;
        i *= 10;
    }
    return total;
}

int main()
{
    int n;
    cin >> n;
    cout << n << " in decimal = " << Convert(n) << " in octal";
    return 0;
}