/*  print following pattern:
                  * 
                * *
              * * *
            * * * *
          * * * * *      
*/

#include<iostream>
using namespace std;
int main()
{
    int rows,columns,i,j;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for ( i = 1; i <= rows; i++)
    {
        for ( j = 1; j <= rows; j++)
        {
               if (j<=rows-i)
               {
                cout<<"  ";
               }
               else
                cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
    
}