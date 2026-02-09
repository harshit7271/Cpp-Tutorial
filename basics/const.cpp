#include <iostream>

int main()
{
    const double PI = 3.14159; // we prefix this using const so that nobody can change it
    const int SPEED_OF_LIGHT = 2999792458;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm" << '\n';

    return 0;
}