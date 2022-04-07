#include <iostream>
using namespace std;

int main()
{ 
	
	bool is_continue = true;
	while(is_continue)
	{
		int a,b;
		cout<<"Enter values of a and b\n";
		cin>>a>>b;
		int x = a-b;
		cout<<"x = a-b : "<<x<<endl;
		try
		{
			if(x!=0)
			{
				cout<<"Result of a/x : "<<a/x<<endl;
			}
			else
				throw(x);
		}
		catch(int c)
		{
			cout<<"Exception caught : x = "<< x <<endl;
			cout<<"Division by zero not possible.\n";
		}
		char c;
		cout<<"\n\nDo you want to continue\nPress y to continue or any other key to exit.\n\n";
		cin>>c;
		if(c!='y')
			break;

	}

	cout<<"\n~~~Thank You~~~\n";
	return 0;

}
