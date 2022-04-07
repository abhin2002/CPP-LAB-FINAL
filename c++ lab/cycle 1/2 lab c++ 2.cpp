#include <iostream>
using namespace std;

int area(int);
int area(int, int);
double area(double);
double area(double, int);
long area(long, int);

int main()
{
        int n=0;
        while(n!=6){
	cout << "\n~~~~Select the shape to find the area.~~~~\n";
	cout <<"1.for Square\n2.for Rectangle\n3.for Circle\n4.for Triangle\n5.for Parallelogram\n\n";
	cin >> n;

	if(n == 1)
	{
		int a;
		cout << "Enter the side of Square : ";
		cin >> a;
		cout<<"\n----------------------------------------";
		cout << "\nArea of square : "<< area(a);
		cout<<"\n----------------------------------------";
	}
	else if(n == 2)
	{
		int a, b;
		cout <<"Enter the sides of rectangle : ";
		cin >> a >> b;
		cout<<"\n----------------------------------------";
		cout <<"\nArea of rectangle : "<< area(a, b);
		cout<<"\n----------------------------------------";
	}
	else if(n == 3)
	{
		double a;
		cout << "Enter the radius of circle : ";
		cin >> a;
		cout<<"\n----------------------------------------";
		cout << "\nArea of the circle is : "<< area(a);
		cout<<"\n----------------------------------------";
	}
	else if(n == 4)
	{
		double a; int b;
		cout <<"Enter the hight and base of triangle : ";
		cin >> a >> b;
		cout<<"\n----------------------------------------";
		cout << "\nArea of the triangle is : "<< area(a, b);
		cout<<"\n----------------------------------------";
	}
	else if(n == 5)
	{
		long a;  int b;
		cout <<"Enter the base and hight of parallelogram : ";
		cin >> a >> b;
		cout<<"\n----------------------------------------";
		cout << "\nArea of parallelogram : "<< area(a, b);
		cout<<"\n----------------------------------------";
	}
        else{
                cout<<"\nYou selected a wrong number";
				break;

        }
		char c;
	cout<<"\nDo yu want to continue\nPress y for continue or any other key to quit\n";
	cin>>c;
	if(c!='y')
		break;
        }

		cout <<"Thank You\n";

	return 0;

}

int area(int a)
{
	return (a*a);
}

int area(int a, int b)
{
	return( a*b);
}

double area(double r)
{
	return (3.14*r*r);
}

double area(double a, int b)
{
	return (.5*a*b);
}

long area(long a, int b)
{
	return (a*b);
}
