#ifndef CAMERA_H
#define CAMERA_H

#include "vec3.h"


struct Camera
{
    //Camera's current position
    Vec3 eye;
    //Camera's target, i.e. what direction the camera is looking at
    Vec3 target;
    //Up direction on camera (for camera orientation)
    Vec3 up;
    //Field of view, how much of the world camera sees
    double fovy;
    //Aspect ratio, width/height of image
    double aspect;
    int width;
    int height;

};


#endif
