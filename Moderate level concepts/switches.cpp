#include <iostream>

int main()
{
    int month;
    std::cout << "Enter the month number (1-12): ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "It is Jan";
        break;
    case 2:
        std::cout << "It is feb";
        break;
    case 3:
        std::cout << "It is March";
        break;
    case 4:
        std::cout << "It is April";
        break;
    case 5:
        std::cout << "It is May";
        break;
    case 6:
        std::cout << "It is June";
        break;
    case 7:
        std::cout << "It is July";
        break;
    case 8:
        std::cout << "It is Aug";
        break;
    case 9:
        std::cout << "It is Sept";
        break;
    case 10:
        std::cout << "It is Oct";
        break;
    case 11:
        std::cout << "It is Nov";
        break;
    case 12:
        std::cout << "It is Dec";
        break;
    default:
        std::cout << "Please enter only in numbers (1-12)";
    }
}