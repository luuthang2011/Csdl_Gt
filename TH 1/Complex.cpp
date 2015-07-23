/* d?nh nghia l?p Complex và các toán t? c?a nó nhu
du?c miêu t? trong file bài t?p lý thuy?t (Q3) */

#include <iostream>
#include <cstdlib>

class Complex {
public:
Complex(double = 0, double = 0);
friend Complex operator+ (const Complex&, const Complex&);
friend Complex operator- (const Complex&, const Complex&);
friend Complex operator* (const Complex&, const Complex&);
void setComplex(double, double);
double getReal();
double getVirtual();
private:
double Real;
double Virtual;
};

using namespace std;

int main()
{
Complex a(3, 4);
Complex b(1, 2);
Complex c = a + b;
system("PAUSE");
return 0;
} 

Complex::Complex(double Real, double Virtual) {
setComplex(Real, Virtual);
}

void Complex::setComplex(double Real, double Virtual) {
this->Real = Real;
this->Virtual = Virtual;
}

double Complex::getReal() {
return Real;
}

double Complex::getVirtual() {
return Virtual;
}

Complex operator+ (const Complex& c1, const Complex& c2) 
{
double Real_ = c1.Real + c2.Real;
double Virtual_ = c1.Virtual + c2.Virtual;
return Complex(Real_, Virtual_);
}

Complex operator- (const Complex& c1, const Complex& c2) 
{
double Real_ = c1.Real - c2.Real;
double Virtual_ = c1.Virtual - c2.Virtual;
return Complex(Real_, Virtual_);
}

Complex operator* (const Complex& c1, const Complex& c2) 
{
double Real_ = c1.Real * c2.Real - c1.Virtual * c2.Virtual;
double Virtual_ = c1.Real * c2.Virtual + c1.Virtual * c2.Real;
return Complex(Real_, Virtual_);
}
