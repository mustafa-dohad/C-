// There are five buttons and clicking each button displays hello in diff language //
#include <iostream>
using namespace std;
int main()
{
    char button;
    cin >> button;
    switch (button)
    {
    case 'A':
        cout << "Hello\n"<<endl;
        break;
    case 'B':
        cout << "Namaste\n"<<endl;
        break;
    case 'C':
        cout << "Vaddakkam\n"<<endl;
        break;
    case 'D':
        cout << "Ciao\n"<<endl;
        break;
    case 'E':
        cout << "Bonjour\n"<<endl;
        break;
    default:
        cout << "Error\n"<<endl;
        break;
    }
}