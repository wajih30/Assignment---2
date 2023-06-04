#include <iostream>
#inlcude "complex.h"

using namespace std;
intcomplex::intcomplex(int number,int complex) : number(number),complex(complex){}
intcomplex intcomplex::operator+(const intcomplex& addition)const{
          int n1 = number + addition.number;
          int c1=complex + addition.complex;
          return intcomplex(n1,c1);
}
intcomplex intcomplex::operator-(const intcomplex& asubtraction)const{
          int n1 = number + subtraction.number;
          int c1=complex + subtraction.complex;
          return intcomplex(n1,c1);
}
intcomplex intcomplex::operator*(const intcomplex& multiplication)const{
          int n1 = number + multiplication.number;
          int c1=complex + multiplication.complex;
          return intcomplex(n1,c1);
}
intcomplex intcomplex::operator/(const intcomplex& division)const{
          int n1 = number + division.number;
          int c1=complex + division.complex;
          return intcomplex(n1,c1);
}
int intcomplex::getnumber()const{
          return number;
}
int intcomplex::getcomplex()const{
          return complex;
}



  
 
  


