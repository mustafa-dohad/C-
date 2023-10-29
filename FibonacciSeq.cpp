// Print the fibonacci sequence //
#include<iostream>
using namespace std;

void Fibo (int num){
    int a = 0, b = 1, c ;
    for (int i = 1; i <= num; i++)
    {
        cout<<a<<endl;
        c = a+b;
        a = b;
        b = c;
    }
    return ;
}
int main()
{
    int t1=0,t2=0,n;
    cin>>n;
    Fibo(n);
    return 0; 
}