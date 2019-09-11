#include <iostream>
#include <cassert>
#include <math.h>
#include "mathLib2D.h"

int main() {
    // Write your test code here!

    // Testing constructor variations
    Point2D p = Point2D();
    assert(p.mX == 0.0 && p.mY == 0.0);
    std::cout << "Assert 1:  passed\n";
    p = Point2D(1, 1);
    assert(p.mX == 1.0 && p.mY == 1.0);
    std::cout << "Assert 2:  passed\n";

    // Testing methods of Point2D
    float x1 = 2.3;
    float y1 = 4.8;
    Point2D p1 = Point2D(0, 0);
    Point2D p2 = Point2D(x1, y1);
    float expect = sqrt(pow(x1, 2) + pow(y1, 2));
    assert(p1.distanceTo(p2) == expect);
    std::cout << "Assert 3:  passed\n";

    float x2 = 2.0;
    float y2 = 5.0;
    p1 = Point2D(0, 0);
    p2 = Point2D(x2, y2);
    expect = pow(x2, 2) + pow(y2, 2);
    assert(p1.fastDistanceTo(p2) == expect);
    std::cout << "Assert 4:  passed\n";

    // Testing Vec2D Constructors
    Vec2D v = Vec2D();
    assert(v.mX == 0 && v.mY == 0);
    std::cout << "Assert 5:  passed\n";
    v = Vec2D(1,1);
    assert(v.mX == 1.0 && v.mY == 1.0);
    std::cout << "Assert 6:  passed\n";

    // Testing Vec2D methods
    float x3 = 3;
    float y3 = 5;
    v = Vec2D(3, 5);
    expect = sqrt(pow(x3,2) + pow(y3,2));
    assert(v.length() == expect);
    std::cout << "Assert 7:  passed\n";

    float outX = v.mX / v.length();
    float outY = v.mY / v.length();
    Vec2D expectV = Vec2D(outX, outY);
    Vec2D result = v.normalize();
    assert(result.mX == expectV.mX && result.mY == expectV.mY);
    std::cout << "Assert 8:  passed\n";

    float db = 2;
    expectV = Vec2D(v.mX * db, v.mY * db);
    result = v.multiply(db);
    assert(result.mX == expectV.mX && result.mY == expectV.mY);
    std::cout << "Assert 9:  passed\n";

    float x4 = 3.10;
    float y4 = 7.9;
    p1 = Point2D(0,0);
    p2 = Point2D(x4, y4);
    expectV = Vec2D(x4, y4);
    Vec2D vnorm = Vec2D();
    result = vnorm.createVector(p1, p2);
    assert(result.mX == expectV.mX && result.mY == expectV.mY);
    std::cout << "Assert 10: passed\n";

    float x5 = 5.9;
    float y5 = 11.64;
    v = Vec2D(x5, y5);
    Point2D expectP = Point2D(p2.mX + x5, p2.mY + y5);
    Point2D res = v.movePoint(p2);
    assert(res.mX == expectP.mX && res.mY == expectP.mY);
    std::cout << "Assert 11: passed\n";

    return 0;
}

