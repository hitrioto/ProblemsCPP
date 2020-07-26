/*  C++ Maths 4

    Given points A and B and a number T, write a function to calculate the position of a point P on the line between A and B with the property |AP| / |AB| = T
*/

#include <iostream>

struct Vec3
{
    float x, y, z;
};

Vec3 linePos(const Vec3 &a, const Vec3 &b, float t)
{
    Vec3 p;

    p.x = (1-t)*a.x +t*b.x;
    p.y = (1-t)*a.y +t*b.y;
    p.z = (1-t)*a.z +t*b.z;

    return p;
}

int main(int argc, char* argv[])
{
    Vec3 a = {1, 1, 2};
    Vec3 b = {3, 3, 3};
    Vec3 p = linePos(a, b, 2/3.f);
    std::cout << p.x << ", " << p.y << ", " << p.z << std::endl;
}
