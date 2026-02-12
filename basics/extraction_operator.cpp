#include <iostream>
#include <string>

int main()
{

    std::string name; // Defining the variable
    int age;

    std::cout << "How old are you? ";
    std::cin >> age;

    std::cout << "Whats your full Name? ";
    std::getline(std::cin >> std::ws, name); // extraction operator that takes users input, getline will help to type full name

    std::cout << "Hello " << name << ". You are " << age << "years old.";

    return 0;
}