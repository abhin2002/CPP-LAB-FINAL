#include <iostream>
using namespace std;

template <class T>

class calculator
{
	T a, b;
public:
	void get_num(void)
	{cout<<"Enter two numbers : \n";
	cin>>a>>b;}
	void show_num(void)
	{cout<<"Number 1 : "<<a<<endl
		<<"Number 2 : "<<b<<endl;}
	T sum(void){return(a+b);}
	T subtraction(void){return(a-b);}
	T multiply(void){return(a*b);}
	T division(void){
	if(b!=0)
		return(a/b);
	else{
		cout<<"\nDivision not possible\n";
	}
}
	
};


int main()
{
	int c1;
	cout<<"\nEnter your choice\n";
	cout<<"1.Integer Operation\n2.Decimal Operation\n3.Quit\n";
	cin>>c1;
	while(c1!=3)
	{
        
	
	
	if(c1==1){
		
		int sm, sub, mlt, div;
		calculator <int> calc2;
		calc2.get_num();
		calc2.show_num();
		int c2;
		cout<<"\nEnter your choice\n";
		cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
		cin>>c2;
		if(c2==1)
		{
			sm=calc2.sum();
			cout<<"\n---------------------------------\n";
			cout<<"Sum               : "<< sm <<endl;
			cout<<"---------------------------------\n";
		}
		else if(c2==2)
		{
			sub=calc2.subtraction();
			cout<<"\n---------------------------------\n";
			cout<<"Number1 - Number2 : "<<sub<<endl;
			cout<<"---------------------------------\n";
		}
		else if(c2==3)
		{
			mlt=calc2.multiply();
			cout<<"\n---------------------------------\n";
			cout<<"Product           : "<<mlt<<endl;
			cout<<"---------------------------------\n";
		}
		else if(c2==4)
		{
			div=calc2.division();
			cout<<"\n---------------------------------\n";
			cout<<"Number1 / Number2 : "<<div<<endl;
			cout<<"---------------------------------\n";
		}
		else{
			cout<<"\nInvalid entry\n";
			continue;
		}
	}
	else if(c1==2)
	{
	float sm, sub, mlt, div;
	calculator <float> calc1;
	calc1.get_num();
	calc1.show_num();
	int c2;
	cout<<"\nEnter your choice\n";
	cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
	cin>>c2;
	if(c2==1)
	{
		sm=calc1.sum();
		cout<<"\n---------------------------------\n";
		cout<<"Sum               : "<< sm <<endl;
		cout<<"---------------------------------\n";
	}
	else if(c2==2)
	{
		sub=calc1.subtraction();
		cout<<"\n---------------------------------\n";
		cout<<"Number1 - Number2 : "<<sub<<endl;
		cout<<"---------------------------------\n";	
	}
	else if(c2==3)
	{
		mlt=calc1.multiply();
		cout<<"\n---------------------------------\n";
		cout<<"Product           : "<<mlt<<endl;
		cout<<"---------------------------------\n";
	}
	else if(c2==4)
	{
		div=calc1.division();
		cout<<"\n---------------------------------\n";
		cout<<"Number1 / Number2 : "<<div<<endl;
		cout<<"---------------------------------\n";
	}
	else{
		cout<<"\nInvalid Entry\n";
		continue;
	}
	}
	else
		break;

	char c2;
	cout<<"\n\nDo you want to continue\nPress y to continue or any other key to exit.\n\n";
	cin>>c2;
	if(c2!='y')
		break;
	}

	cout<<"\n~~~Thank You~~~\n";
	return 0;
	
}
