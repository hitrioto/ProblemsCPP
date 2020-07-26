/*  C++ Advanced 4

    Examine the code below and make as many optimizations as you can.
*/

#include <iostream>


#include <math.h>

const double PI = 3.14159265;

double deg2rad(double deg)
{
    return deg * PI / 180;
}

double compute_value(double degrees)
{
    return sin(deg2rad(degrees)) / cos(deg2rad(degrees));
}

int main(int argc, char* argv[])
{
    double degrees = 0;
    double val;
    while (degrees <= 360)
    {
//        val = compute_value(degrees);
        std::cout << degrees << ": " << sin(deg2rad(degrees)) / cos(deg2rad(degrees)) << std::endl;
        degrees += 1;
    };
}
