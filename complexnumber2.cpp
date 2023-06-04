#include <iostream>
#include "Complex_f.h" 
using namespace std;
complexfloat::complexfloat(float number ,float complex):number(number),complex(complex){}
complexfloat complexfloat:: operator+(const complexfloat& addition)const{
  float n1=number+ addition.number;
  float c1=complex+ addition.complex;
  return complexfloat(n1,c1);
}
complexfloat complexfloat:: operator-(const complexfloat& subtraction)const{
  float n1=number+ subtraction .number;
  float c1=complex+ subtraction .complex;
  return complexfloat(n1,c1);
}
complexfloat complexfloat:: operator*(const complexfloat& multiplication )const{
  float n1=number+ multiplication.number;
  float c1=complex+ multiplication.complex;
  return complexfloat(n1,c1);
}
complexfloat complexfloat:: operator/(const complexfloat& division)const{
  float n1=number+ division.number;
  float c1=complex+ division.complex;
  return complexfloat(n1,c1);
}
int complexfloat::getnumber()const {
	return number;
}
int complexfloat::getcomplex()const {
	return complex;
}
