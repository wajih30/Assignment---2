#pragma once
#define complexfloat
#include <iostream>
#include "header1.h"
using namespace std;

class complexfloat:public intcomplex{
private:
  float number;
  float complex;
public:
  complexfloat(float number=0.0f,int complex =0.0f);
  float getnumber()const;
  float getnumber()const;
  complexfloat operator+(const complexfloat& addition) const;
  complexfloat operator-(const complexfloat& subtraction) const;
  complexfloat operator*(const complexfloat& multiplication) const;
  complexfloat operator/(const complexfloat& division) const;
}
