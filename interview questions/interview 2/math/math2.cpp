/*  C++ Maths 2

    Write a function WithinMaxAngle that checks if the angle between two arbitrary vectors is less than MAX_DEGREES.
*/

#include <iostream>

#include <math.h>       /* needed for acos function */

// define also PI for convenience
#define PI 3.14159265


struct Vec3
{
    float x, y, z;
};

const float MAX_DEGREES = 43.f;

float scalar_product(const Vec3 &v1, const Vec3 &v2){
  float scal;

  scal = v1.x*v2.x + v1.y*v2.y + v1.z*v2.z;

  return scal;
}


bool WithinMaxAngle(const Vec3 &v1, const Vec3 &v2)
{
    float scalar_prod = scalar_product(v1,v2);

    float v1_len = sqrt(scalar_product(v1,v1));
    float v2_len = sqrt(scalar_product(v2,v2));

    float deg_angle = acos (scalar_prod/(v1_len*v2_len)) * 180.0 / PI;

    if(deg_angle < MAX_DEGREES){
      return true;
    }
    else{
    return false;
  }
}

int main(int argc, char* argv[])
{
    Vec3 a = {1, 1, 1};
    Vec3 b = {0.3f, 0, 1};
    Vec3 c = {0.5f, 0, 1};
    std::cout << WithinMaxAngle(a, b) << std::endl;
    std::cout << WithinMaxAngle(a, c) << std::endl;
}
