#include <iostream>
#include <gmpxx.h>
using namespace std;

int main() {
  mpz_class x;
  mpz_class y;

cout<<"GCD of two numbers"<<endl;
cout<<"Enter number x:";
cin>>x;
cout<<"Enter number y:";
cin>>y;
if(x<y)
{
    swap(x,y);
}

while(x%y!=0)
{
  x=x%y;
  swap(x,y);
}
cout<<"GCD:"<<y;
return 0;
}
