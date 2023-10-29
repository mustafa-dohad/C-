// find if number is armstrong number for e.g: 153 -> 1^3 + 5^ + 3^3 = 1 + 125 + 27 = 153 // 
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,sum=0,lastdigit;
    cin>>n;
    int original = n;
    while (n>0)
    {
       lastdigit = n % 10;
       sum += pow(lastdigit, 3);
       n /= 10;  
    }
    if (sum == original)
    {
        cout<<"This is an ArmStrong Number"<<endl;
    }
    else
    {
       cout<<"Not an Armstrong Number"<<endl;
    }
    return 0;
    
}