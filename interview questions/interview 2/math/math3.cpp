/*  C++ Maths 3

    A triangle is defined by three points:

    A(x1, y1, z1)
    B(x2, y2, z2)
    C(x3, y3, z3)

    Write a function that will return a vector perpendicular to the plane spawned by A, B and C.
*/

#include <iostream>
#include <random>

struct Vec3
{
    float x, y, z;
};

Vec3 vector_product(const Vec3& a, const Vec3& b){
  Vec3 result;

  result.x = a.y*b.z - a.z*b.y;
  result.y = -(a.x*b.z - a.z*b.x);
  result.z = a.x*b.y - a.y*b.x;

  return result;
}

Vec3 vector_from_two_points(const Vec3& a, const Vec3& b){
  Vec3 v;
  v.x = b.x - a.x;
  v.y = b.y - a.y;
  v.z = b.z - a.z;
  return v;
}


Vec3 GetVectorPerpendicularToPlane(const Vec3& a, const Vec3& b, const Vec3& c)
{

    Vec3 v1 = vector_from_two_points(a,b);
    Vec3 v2 = vector_from_two_points(a,c);

    Vec3 v = vector_product(v1,v2);

    return v;
}

int main(int argc, char* argv[])
{
    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_real_distribution<float> random(-32.0f, 32.0f);

    Vec3 A =  { random(rng), random(rng), random(rng) };
    Vec3 B =  { random(rng), random(rng), random(rng) };
    Vec3 C =  { random(rng), random(rng), random(rng) };

    Vec3 result = GetVectorPerpendicularToPlane(A, B, C);

    std::cout << result.x << ", " << result.y  << ", " << result.z << std::endl;
}
