#include <iostream>

double f(double x);
double fd(double x);

double n = 1.0;

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
double f(double x) {
    return x*x*x*x*x + 2.0 * x - 4;
}

// f'(x)
double fd(double x) {
    return 5.0 * x*x*x*x + 2;
}