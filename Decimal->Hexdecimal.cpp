// print hexadecimal value of the user given decimal value;
#include<iostream>
using namespace std;

string Hexa(int num)
{
    int r;
    string hexadecimal = "";
  char hex[]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
  while (num != 0)
  {
    r = num % 16;
    hexadecimal = hex[r] + hexadecimal;
    num /= 16; 
  }
  return hexadecimal;
}

int main(){
    int n;
    cin>>n;
    cout<<n<<" in decimal = "<<Hexa(n);
}