#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex{
    int m_real;
    int m_imag;

public:
    Complex();
    Complex(int,int);
    Complex(int);
    Complex(const Complex&);
    Complex operator+(const Complex&);
    Complex operator-(const Complex&);
    Complex operator*(const Complex&);
    Complex operator++();
    Complex operator++(int);
    Complex operator==(const Complex&);
    void display();
    int get_mreal();
    int get_mimag();















};

#endif // COMPLEX_H_INCLUDED
