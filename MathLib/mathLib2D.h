#ifndef MATHLIB_2D_H
#define MATHLIB_2D_H

class Point2D {
public:
    Point2D();
    Point2D(float inX, float inY);
    float mX;
    float mY;

    float distanceTo(Point2D other);
    float fastDistanceTo(Point2D other);
};

class Vec2D {
public:
    Vec2D();
    Vec2D(float inX, float inY);
    float mX;
    float mY;
    float length();
    Vec2D normalize();
    Vec2D multiply(float scalar);
    Point2D movePoint(Point2D source);

    static Vec2D createVector(Point2D p1, Point2D p2);
};

#endif
