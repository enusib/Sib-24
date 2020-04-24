#include <iostream>
#include <gmpxx.h>
using namespace std;

int main() {
mpz_class a("12052425727");
mpz_class b("15045452");

 while (a != b) {
    if (a > b) {
      a = a - b;
    }
    else {
      b = b - a;
    }
  
  cout << a;
}
}
