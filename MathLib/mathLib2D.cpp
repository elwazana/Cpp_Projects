#include <math.h>
#include "mathLib2D.h"

// Implement functions here.

// Don't write a main function, do that in main.cpp

// Constructors for Point2D
Point2D::Point2D() {
  mX = 0.0;
  mY = 0.0;
}

Point2D::Point2D(float inX, float inY) {
  mX = inX;
  mY = inY;
}

// Methods of a Point2D
float Point2D::distanceTo(Point2D other) {
  float left  = pow((other.mX - mX), 2);
  float right = pow((other.mY - mY), 2);
  float d     = sqrt(left + right);
  return d;
}

float Point2D::fastDistanceTo(Point2D other) {
  float left  = pow((other.mX - mX), 2);
  float right = pow((other.mY - mY), 2);
  float d     = left + right;
  return d;
}


// Constructors for Vec2D
Vec2D::Vec2D() {
  mX = 0.0;
  mY = 0.0;
}

Vec2D::Vec2D(float inX, float inY) {
  mX = inX;
  mY = inY;
}

// Methods of a Vec2D
float Vec2D::length() {
  float calc = pow(mX, 2) + pow(mY, 2);
  float v    = sqrt(calc);
  return v;
}

Vec2D Vec2D::normalize() {
  float outX = mX / length();
  float outY = mY / length();
  Vec2D vnorm = Vec2D(outX, outY);
  return vnorm;
}

Vec2D Vec2D::multiply(float scalar) {
  Vec2D vnorm = Vec2D(mX * scalar, mY * scalar);
  return vnorm;
}
