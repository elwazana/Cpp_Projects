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

