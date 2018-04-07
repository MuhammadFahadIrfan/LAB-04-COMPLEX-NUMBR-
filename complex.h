#include <iostream>
using namespace std;

class complex
{
  public:
  complex()
  {
    this->real=2;
    this->imag=3;}

  complex(float r,float i)
  { complex z1c;
    this->real=z1c.real;
    this->imag=z1c.imag;
  }

  
  void display()
  {
    cout<<"REAL="<<this->real<<endl;
    cout<<"IMAG="<<this->imag<<endl;
  }
  void setreal(float set1)
{
  this->real=set1;
}
float getreal()
{
  return this->real;
}
void setimag(float set2)
{
  this->imag=set2;
}
float getimag()
{
  return this->imag;
}

void setrealimag(float real,float imag)
{
  this->real=real;
  this->imag=imag;

}
 
 complex add1(complex z1,complex z2)
 { complex result;
   float real= z1.real+ z2.real;
  
   float imag= z1.imag+ z2.imag;
   result.setrealimag ( real, imag);
   return result;
 }
 complex add2(complex z2)
 {
   complex z3;
   z3.real=this->real + z2.real;
   z3.imag=this->imag + z2.imag;
   return z3;
  
 }
 complex sub(complex z2)
 {
   complex z3;
   z3.real= z2.real-this->real ;
   z3.imag= z2.imag - this->imag ;
   return z3;
  
 }


  private:
  float real;
  float imag;

};