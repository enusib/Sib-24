#include <iostream>
#include <gmpxx.h>

int main() {

mpz_class a("9263591128439081");
mpz_class b("7612058254738945");

std::cout<<"a = "<<a;
std::cout<<"\nb = "<<b;

mpz_class i;
i=a;

while(!(a % i == 0 && b % i == 0)){
if (i>0) i--; 
else break;
}

std::cout << "\nNOD = " << i << "\nSultanov Ramazan (SIB-24)\n";

return 0;
}
