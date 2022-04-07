#include <iostream>
using namespace std;

class complex
{
	float a, b;
public:
	complex(){};
	complex(float x) {a=b=x;}
	complex(float real, float imaginary)
	{
		a=real; b=imaginary;
	}

	void sum(complex, complex);
	void show();
};


void complex::sum(complex c1, complex c2)
{
	
	a = c1.a + c2.a;
	b = c1.b + c2.b;
}

void complex::show()
{
	if(b<0)
	{   cout <<a<<" - j" <<(-1)*b<<endl;}
	else
	{cout <<a<<" + j" <<b<<endl;}
}


int main(){

	float a, b;
	cout <<"Enter the real part of complex number : "<<endl;
        cin >>a;
	cout <<"Enter the imaginary part of complex number : "<<endl;
	cin >>b;

	float c, d;
	cout <<"Enter the real part of complex number : "<<endl;
	cin >>c;
	cout <<"Enter the imaginary part of complex number : "<<endl;
	cin >>d;



	complex X, Y, Z;
	X = complex(a,b);
	Y = complex(c,d);
	Z.sum(X,Y);

	cout << "X : ";
	X.show();
	cout << "Y : ";
	Y.show();
	cout << "Z : ";
	Z.show();
}
