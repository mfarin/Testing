#include <iostream>
using namespace std;

int main()
{
  int a,b;
  b=9999;
  repeat
    cout<< "input number:";
    cin>> a;
    if a<b then
      b=a;
  until a=9999
  cout<< "angka terkecil adalah:" << b << ".\n";
  return 0;
}
