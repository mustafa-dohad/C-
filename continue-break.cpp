// find all the prime numbers between given 2 values //
#include <iostream>
using namespace std;
int main()
{
    int a, b, num,i;
    cin>>a>>b;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    for ( num = a; num <= b ; num++)
    {
        for (i = 2; i < num; i++)
        {
           if (num % i == 0)
           {
            break;
           }
           
        }
        if (i == num)
        {
           cout<<num<<endl;
        }
        
    }
    return 0;
}