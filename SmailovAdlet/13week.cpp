//Вычисление НОД больших чисел
#include <iostream>
#include <gmpxx.h>

int main(int argc, char *argv[]) {
    mpz_class a;
    mpz_class b;
    mpz_class c;
    std::cout << "Calculation of GCD numbers\n";
    std::cout << "Enter the first number = \n";
    std::cin >> a;
    std::cout << "Enter the second number = \n";
    std::cin >> b;
    while (b != 0) {
        c = b;
        b = a % b;
        a = c;
    }
    std::cout << "The GCD of numbers is " << a << "\n";
    return 0;
}
