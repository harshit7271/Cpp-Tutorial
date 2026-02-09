#include <iostream>

int main()
{
    const double pi = 3.14159; // we prefix this using const so that nobody can change it
    double radius = 10;
    double circumference = 2 * pi * radius;

    std::cout << circumference << "cm" << '\n';

    return 0;
}