#ifndef IMAGE_H
#define IMAGE_H

#include <vector>
#include "vec3.h"
#include "color.h"

class Image
{
    private:
        int width;
        int height;
        std::vector<Color> pixels; 

    public:    
        Image(int width, int height) : width(width),
        height(height), pixels(width * height, Color{0,0,0})
        {
        }

        void updatePixel(int x, int y, Color color)
        {
            pixels[y * width + x] = color;
        }

        Color getPixel(int x, int y)
        {
            return pixels[y * width + x];
        }
};

#endif
