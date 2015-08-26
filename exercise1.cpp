#include(iostream)
using namespace std;
int main()
{
  int a,b,c;
  a=2;
  b=-3;
  c=1;
  int hsl;
  hsl=sqrt(b*b-4*a*c);
    int x1,x2;
    x1=(-b/2*a)+(hsl/2*a);
    x2=(-b/2*a)-(hsl/2*a);
    cout << "x1:";
    cout << x1;
    cout <<" x2:";
    cout << x2;
    return 0;
}
