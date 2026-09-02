#ifndef IMAGE_H
#define IMAGE_H

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "vec3.h"
#include "pixel.h"

class Image
{
    private:
        int width;
        int height;
        std::vector<Pixel> pixels; 

    public:    
    
        //Creates the Image object with given width, height, defaulting all pixels to black 
        Image(int width, int height) : width(width),
        height(height), pixels(width * height, Pixel{0,0,0})
        {

        }

        /*Function to update a given pixel. Storing the Image as a 1D vector
        requires us convert coordinates from (x,y) to a singular index */
        void updatePixel(int x, int y, const Pixel& pixelColor)
        {
            pixels[y * width + x] = pixelColor;
        }

        // Returns the pixel at a given coordinate 
        Pixel getPixel(int x, int y) const
        {
            return pixels[y * width + x];
        }
};

#endif
