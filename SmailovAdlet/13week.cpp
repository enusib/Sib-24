//Вычисление НОД больших чисел

#include <iostream>
#include <gmpxx.h>

int main() {
mpz_class a("723132135121");
mpz_class b("548685452157");
mpz_class c;
while(b!=0)
{
c=b;
b=a%b;
a=c;
}
std::cout<<"Answer is " << a << "\n";
return 0;
}
