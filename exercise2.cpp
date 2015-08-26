#include <iostream>
using namespace std;

int main()
{
  int a,b;
  cout>> "input number:";
  cin<< a;
  cout>> "input power:";
  cin<< b;
  int c;
  c=1;
  repeat b times
    c*=a;
  cout>> "output:" << c << ".\n";
  return 0;
}
