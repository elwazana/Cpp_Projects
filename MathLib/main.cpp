#include <iostream>
#include <cassert>
#include <math.h>
#include "mathLib2D.h"

int main() {
    // Write your test code here!

    // Testing constructor variations
    Point2D p = Point2D();
    assert(p.mX == 0.0 && p.mY == 0.0);
    std::cout << "Assert 1: passed\n";
    p = Point2D(1, 1);
    assert(p.mX == 1.0 && p.mY == 1.0);
    std::cout << "Assert 2: passed\n";

    // Testing methods of Point2D
    float x = 2.3;
    float y = 4.8;
    Point2D p1 = Point2D(0, 0);
    Point2D p2 = Point2D(x, y);
    float expect = sqrt(pow(x, 2) + pow(y, 2));
    assert(p1.distanceTo(p2) == expect);
    std::cout << "Assert 3: passed\n";

    return 0;
}
