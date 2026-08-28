#include <cmath>

#ifndef VEC3_H
#define VEC3_H
//Tolerance for floating point error
constexpr double epsilon{1e-9};

struct Vec3
{

    double x{};
    double y{};
    double z{};

    double length() const;
    
    Vec3 normalize() const
    {
        double magnitude = this->length();
        
        if(magnitude == 0)
        {
            return {};
        }

        Vec3 normalizedVec{x/magnitude, y/magnitude, z/magnitude};
        return normalizedVec;

    }

};


    Vec3 operator+(const Vec3& u, const Vec3& v)
    {
        Vec3 p{};
        p.x = u.x + v.x;
        p.y = u.y + v.y;
        p.z = u.z + v.z;
        return p;
    }

    Vec3 operator-(const Vec3& u, const Vec3& v)
    {
        Vec3 p{};
        p.x = u.x - v.x;
        p.y = u.y - v.y;
        p.z = u.z - v.z;
        return p;
    }

    Vec3 operator*(const Vec3& u, const double& scalar)
    {
        Vec3 p{};
        p.x = u.x * scalar;
        p.y = u.y * scalar;
        p.z = u.z * scalar;
        return p;
    }

    Vec3 operator/(const Vec3& u, const double& scalar)
    {
        Vec3 p{};
        p.x = u.x / scalar;
        p.y = u.y / scalar;
        p.z = u.z / scalar;
        return p;
    }

   bool operator==(const Vec3& u, const Vec3& v)
    {
        return std::abs(u.x - v.x) < epsilon 
            && std::abs(u.y - v.y) < epsilon 
            && std::abs(u.z - v.z) < epsilon;
    }

    double dot(const Vec3& u,const Vec3& v) 
    {
        double dotProd = (u.x * v.x) + (u.y * v.y) + (u.z * v.z);
        return dotProd;
    }

    double Vec3::length() const
    {
        double length{};
        length = std::sqrt(dot(*this, *this));
        return length;
    }

    Vec3 cross(const Vec3& u, const Vec3& v)
    {
        double a{(u.y * v.z - u.z * v.y)};
        double b{(u.z * v.x - u.x * v.z)};
        double c{(u.x * v.y - u.y * v.x)};
        Vec3 crossProduct{a, b, c};
        return crossProduct;
    }

    bool perpendicular(const Vec3& u, const Vec3& v)
    {
        if (std::abs(dot(u, v)) < epsilon )
        {
            return true;
        }
        return false;
    }

    std::ostream& operator<<(std::ostream& out, const Vec3& u)
    {
        out << "[ " << u.x << " " << u.y << " " << u.z << " ]";
        return out;
    }


#endif
