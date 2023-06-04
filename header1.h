#pragma once
#define intcomplex


class intcomplex{
private:
  int number;
  int complex
public:
  intcomplex(int number = 0, int complex =0) : number(number) , complex(complex){}
int getnumber()const;
int getcomplex()const;
intcomplex operator+(const intcomplex& addition)const;
intcomplex operator-(const intcomplex& subtraction)const;
intcomplex operator*(const intcomplex& multiplication)const;
intcomplex operator/(const intcomplex& division)const;
};
  





