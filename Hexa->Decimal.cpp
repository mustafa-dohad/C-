/*
   convert user given hexadecimal to decimal
*/
#include <iostream>
#include <cmath>
using namespace std;

int Convert(int num)
{
    int r, total = 0, i = 0;
    while (num != 0)
    {
        r = num % 10;
        num = num / 10;
        total += pow(16, i) * r;
        i++;
    }

    return total;
}

int main()
{
    int n;
    cin >> n;
    cout << n << " in octal = " << Convert(n) << " in decimal";
    return 0;
}