#include <iostream>

double f(int x);
double fd(int x);

double n = 1;

int main()
{
    std::cout << "Here I will demonstrate an exectution of Newtons method of finding the zero point" << std::endl;
    std::cout << "in the function x^5 + 2x - 4." << std::endl << std::endl;

    for (int i = 1; i <= 5; i++) {
        n = n - (f(n) / fd(n));
        std::cout << " x_" << i << ": " << n << std::endl;
    }
    return 0;
}

// f(x)
double f(int x) {
    return pow(x, 5) + 2.0 * x - 4;
}

// f'(x)
double fd(int x) {
    return 5 * pow(x, 4) + 2;
}