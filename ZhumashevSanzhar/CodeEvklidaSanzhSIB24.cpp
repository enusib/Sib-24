#include <iostream>
#include <math.h>
#include <gmpxx.h>

using namespace std;

mpz_class gcd(mpz_class x, mpz_class y) {
    std::cout << "GCD of numbers\n";
    mpz_class z;
    std::cout << "enter x = \n";
    std::cin >> x;
    std::cout << "enter y = \n";
    std::cin >> y;
    while (y != 0) {
        z = y;
        y = x % y;
        x = z;
    }
    return x;
}

int main() {
    mpz_class x;
    mpz_class y;
    std::cout << gcd(x, y) << " is GCD of numbers" << "\n";
}
