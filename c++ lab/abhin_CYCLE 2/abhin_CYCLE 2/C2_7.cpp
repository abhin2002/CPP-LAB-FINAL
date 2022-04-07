//============================================================================
// Name        : C2_7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class alpha
{
	int x;
public:
	alpha(int a)
	{
		x=a;
		cout<<"alpha initialized\n";
	}
	void show_x(void)
	{
		cout<<"x = "<<x<<endl;
	}
};

class beta
{
	float y;
public:
	beta(float b)
	{
		y=b;
		cout<<"beta initialized\n";
	}
	void show_y(void)
	{
		cout<<"y = "<< y <<endl;
	}
};

class gamma: public beta, public alpha
{
	int m, n;
public:
	gamma(int a, float b, int c, int d):
		alpha(a), beta(b)
	{
		m=c;
		n=d;
		cout<<"gamma initialized\n";
	}
	void show_mn(void)
	{
		cout<<"m = "<< m <<endl
				<<"n = "<<n<<endl;
	}
};

int main()
{
	int x, m, n;
	float y;
	cout<<"Enter the numbers x,y,m,n"<<endl;
	cin>>x>>y>>m>>n;
	gamma g(x,y,m,n);
	cout<<"\n";
	g.show_x();
	g.show_y();
	g.show_mn();

	return 0;
}
