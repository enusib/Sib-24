#include <iostream>
#include <gmpxx.h>

int main() {

mpz_class a;
mpz_class b;

std:: cout << "a = ";
std:: cin >> a;
std:: cout << "\nb = ";
std:: cin >> b;

mpz_class i;
i = a;

while (!(a % i == 0 && b % i == 0))
{
if ( i>0 ) 
  i--; 
else break;
}

std:: cout << "\nNOD = " << i << "\nSultanov Ramazan (SIB-24)\n";

return 0;
}
