#include <iostream>
#include <gmpxx.h>
using namespace std;
int gcd(long a, long b) {
	long c;
	while(b!=0) {
		c=b;
		b=a%b;
		a=c; }
	return a; }
int main() {
long a,b;
cin>>a>>b;
cout<<gcd(a,b);
}
