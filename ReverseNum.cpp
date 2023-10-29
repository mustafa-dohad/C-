// Reverse the given number for e.g: 1234 = 4321 //
#include<iostream>
using namespace std;
int main()
{
    int n,reverse;
    cin>>n;
    while (n>0)
    {
       int lastdigit = n % 10;
       reverse = (reverse * 10) + lastdigit;
       n /= 10;
    }
    cout<<reverse<<endl;
    return 0;
}