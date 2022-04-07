#include <iostream>
using namespace std;

class Complex
{
    float real;
    float imaginary;
    public:
    void getdata(void);
    void display(void);
    friend Complex operator +(Complex, Complex);
    friend Complex operator *(Complex, Complex);
};

void Complex :: getdata(void)
{
    cout<<"\nEnter the real and imaginary part of complex number : \n";
    cin>>real>>imaginary;
}

void Complex :: display(void)
{
    if(imaginary >= 0)
        cout<<real<<" + i"<<imaginary<<endl;
    else
        cout<<real<<" - i"<<-1*(imaginary)<<endl;
}

Complex operator +(Complex c1,Complex c2)
{
    Complex c3;
    c3.real=c1.real+c2.real;
    c3.imaginary=c1.imaginary+c2.imaginary;
    return c3;
}

Complex operator *(Complex c1,Complex c2)
{
    Complex c3;
    c3.real=(c1.real*c2.real)-(c1.imaginary*c2.imaginary);
    c3.imaginary=(c1.real*c2.imaginary)+(c1.imaginary*c2.real);
    return c3;
}

int main()
{
    Complex c1, c2, c3, c4;
    c1.getdata();
    c2.getdata();
    c3=c1+c2;
    c4=c1*c2;
    cout<<"First complex number      : ";
    c1.display();
    cout<<"Second complex number     : ";
    c2.display();
    cout<<"Sum of complex numbers    : ";
    c3.display();
    cout<<"Product of complex number : ";
    c4.display();

    return 0;


}