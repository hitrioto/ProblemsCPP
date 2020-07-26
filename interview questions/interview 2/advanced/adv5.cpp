/*  C++ Advanced 5
    
    Make as many memory and performance optimizations as you can.
*/

#include <iostream>

#define WIDTH (128)
#define HEIGHT (128)

struct Pixel
{
    float r;
    float g;
    float b;
    float a;
};

class Image
{

public:

    Image() { m_Pixels = new Pixel[WIDTH * HEIGHT]; }
    ~Image(){ delete[] m_Pixels; }

    void Clear(float value)
    {
        unsigned numPixels = WIDTH * HEIGHT;

        for (unsigned i=0; i < numPixels; ++i)
        {
            Pixel clearValue;
            clearValue.r = value;
            clearValue.g = value;
            clearValue.b = value;
            clearValue.a = value;

            SetPixel(clearValue, i / WIDTH, i % WIDTH);
        }
    }

    void Add(Image* immageToAdd)
    {
        unsigned numPixels = WIDTH * HEIGHT;

        for (unsigned i=0; i < numPixels; ++i)
        {
            unsigned x = i / WIDTH;
            unsigned y = i % WIDTH;

            Pixel pixel = GetPixel(x, y);

            pixel.r += immageToAdd->GetPixel(x, y).r;
            pixel.g += immageToAdd->GetPixel(x, y).g;
            pixel.b += immageToAdd->GetPixel(x, y).b;
            pixel.a += immageToAdd->GetPixel(x, y).a;

            SetPixel(pixel, x, y);
        }
    }

    Pixel GetPixel(unsigned x, unsigned y)
    {
        return m_Pixels[y * WIDTH + x];
    }

    void SetPixel(Pixel pixel, unsigned x, unsigned y)
    {
        m_Pixels[y * WIDTH + x] = pixel;
    }

private:
    Pixel* m_Pixels;
};

void main(int argc, char* argv[])
{
    Image imageA;
    imageA.Clear(0.5f);
    Image imageB;
    imageB.Clear(0.2f);

    imageA.Add(&imageB);
}