/* Pythagorean triples are a^2+b^2 = c^2 where a, b and c are the three positive integers.
   These triples are represented as (a,b,c). Here, a is the perpendicular, b is the base and
   c is the hypotenuse of the right-angled triangle.
*/
#include <iostream>
using namespace std;

bool Pyth(int a, int b, int c)
{
   int max, o1, o2;
   if (a > b && a > c)
   {
      max = a;
      o1 = b;
      o2 = c;
   }
   else if (b > a && b > c)
   {
      max = b;
      o1 = a;
      o2 = c;
   }
   else
   {
      max = c;
      o1 = b;
      o2 = a;
   }
   if ((max * max) == (o1 * o1) + (o2 * o2))
   {
      return true;
   }
   else
      return false;
}
int main()
{
   int n1, n2, n3, max;
   cin >> n1 >> n2 >> n3;
   if (Pyth(n1, n2, n3))
   {
      cout << "It is a Pythagorean Triplet" << endl;
   }
   else
      cout << "It is not a Pythagorean Triplet" << endl;
   return 0;
}