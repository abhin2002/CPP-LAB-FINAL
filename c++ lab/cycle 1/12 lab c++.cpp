//============================================================================
// Name        : 12.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class complex
{
	float x;
	float y;
public:
	void input();
	friend complex sum(complex, complex);
	void show(complex);
};

void complex::input()
{
	cout<<"Enter the real part of complex number : ";
	cin>>x;
	cout<<"Enter the imaginary part of complex number : ";
	cin>>y;
}

complex sum(complex c1, complex c2)
{
	complex c3;
	c3.x = c1.x+c2.x;
	c3.y = c1.y+c2.y;
	return(c3);
}
void complex::show(complex c)
{
	if(c.y<0)
	{cout<<c.x<<" - j "<<(-1)*(c.y)<<"\n";}
	else
	cout<<c.x<<" + j "<<c.y<<"\n";
}

int main()
{
	complex X, Y, Z;

	X.input();
	Y.input();
	Z=sum(X, Y);

	cout<<"x = ";
	X.show(X);
	cout<<"y = ";
	Y.show(Y);
	cout<<"z = ";
	Z.show(Z);

	return 0;

}
