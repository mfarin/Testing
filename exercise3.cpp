#include <iostream>
using namespace std;

int main()
{
  int a,b,c;
  cout<< "input side 1:";
  cin>> a;
  cout<< "input side 2:";
  cin>> b;
  cout<< "input side 3:";
  cin>> c;
    if a=b and b=c then
      cout<< "output: sama sisi";
    else if a=b or b=c or a=c then
      cout<< "ouput: sama kaki";
    else
      cout<< "sembarang";
    return 0;
}
