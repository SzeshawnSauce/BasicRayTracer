#include <iostream>
#include "vec3.h"

int main()
{
    Vec3 crosstest1{ 3, 4, 0};
    Vec3 crosstest2{1, 2, 2};
    Vec3 crossAnswer{8, -6, 2};

    Vec3 Test1{1,0,0};
    Vec3 Test2{0,1,0};

    Vec3 u{3.0, -2.0, 5.0};
    Vec3 v{-4.0, 7.0, 1.0};

    Vec3 a{3.0, -2.0, 5.0};
    Vec3 b{-4.0, 7.0, 1.0};

    Vec3 c{1.0, 0.0, 0.0};
    Vec3 d{0.0, 1.0, 0.0};

    Vec3 e{2.0, 4.0, 6.0};
    Vec3 f{1.0, 2.0, 3.0};

    Vec3 g{-3.0, -4.0, 0.0};
    Vec3 h{0.0, 0.0, 5.0};

    Vec3 zero{0.0, 0.0, 0.0};
    Vec3 i{5.0, -3.0, 2.0};


       // Length tests
    std::cout << "a.length() = " << a.length() << '\n';
    std::cout << "b.length() = " << b.length() << '\n';
    std::cout << "g.length() = " << g.length() << '\n';
    std::cout << "h.length() = " << h.length() << '\n';
    std::cout << "zero.length() = " << zero.length() << '\n';


    // Dot product tests
    std::cout << "dot(c, d) = " << dot(c, d) << '\n';
    std::cout << "dot(e, f) = " << dot(e, f) << '\n';


    // Cross product tests
    Vec3 cd = cross(c, d);
    Vec3 dc = cross(d, c);

    std::cout << "cross c and d = " << cd << '\n';
    std::cout << "cross d and c = " << dc << '\n';
    return 0;
}
