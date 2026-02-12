#include <iostream>

int main()
{
    double students = 20;

    // students = students+1;
    // students+=1;
    // students++;

    // students -=2;
    // students--;

    // students = students * 2;
    // students *= 2;

    // students /= 3;

    int remainder = (int)students % 3;

    std::cout << remainder << std::endl;

    return 0;
}