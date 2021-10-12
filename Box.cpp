#include "Box.h"

// Implement setters and getters

void Box::setLength(int pLength)
{
  length=pLength;

}
void Box::setWidth(int pWidth)
{
  width=pWidth;

}
void Box::setHeight(int pHeight)
{
  height=pHeight;

}
int Box::getLength()
{
  return length;
}
int Box::getWidth()
{
  return width;

}
int Box::getHeight()
{
  return height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return width*length*height;
}
