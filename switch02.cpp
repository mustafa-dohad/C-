// implement a simple calculator using switch statements //
#include <iostream>
using namespace std;
int main()
{
    int a, b, result;
    cout << "Enter the numbers: ";
    cin >> a >> b;
    char operate;
    cout << "Enter an operator (+,-,*,/): ";
    cin >> operate;
    switch (operate)
    {
    case '+':
        result = a + b;
        cout<<result<<endl;
        break;
    case '-':
        result = a - b;
        cout<<result<<endl;
        break;
    case '*':
        result = a * b;
        cout<<result<<endl;
        break;
    case '/':
        result = a / b;
        cout<<result<<endl;
        break;

    default:
        break;
    }
}