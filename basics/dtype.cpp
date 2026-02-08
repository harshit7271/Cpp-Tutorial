#include <iostream>

int main()
{
    // integer (whole number)
    int age = 23;
    int year = 2026;
    int days = 8.5;

    // double : now this stores decimal digits including number
    double price = 11.23;
    double gpa = 8.3;
    double temperature = 17.5;

    // char dtype : stores a single character only
    char grades = 'A';
    char initial = 'G';
    char currency = '$';

    // boolean (true or false)
    bool student = true;
    bool power = false;

    // string (object that represent a sequence of text)
    std::string name = "Garima";
    std::string herNature = "Loving as fuck";

    std::cout << age << '\n';            // 8
    std::cout << price << '\n';          // 11.23
    std::cout << currency << '\n';       // G
    std::cout << power << '\n';          // 0
    std::cout << name << '\n';           // Garima
    std::cout << herNature << std::endl; // Loving as fuck

    return 0;
}