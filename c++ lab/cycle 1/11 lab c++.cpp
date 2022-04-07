
#include <iostream>
using namespace std;

class class_2;

class class_1
{
	int value1;
public:
	void input(void){
		cout<<"Enter a number : ";
		cin>>value1;
	}
	void display(void){cout<<value1<<endl;}
	friend void exchange(class_1 &, class_2 &);
};

class class_2
{
	int value2;
public:
	void input(void){
		cout<<"Enter a number : ";
		cin>>value2;
	}
	void display(void){cout<< value2 <<endl;}
	friend void exchange(class_1 &, class_2 &);
};

void exchange(class_1 & x, class_2 & y)
{
        int temp;
	temp = x.value1;
	x.value1 = y.value2;
	y.value2 = temp;
}
int main() {
	class_1 c1;
	class_2 c2;

	c1.input();
	c2.input();

	cout<<"Value before exchange "<<endl;
	c1.display();
	c2.display();

	exchange(c1, c2);

	cout << "Value after exchange " <<endl;
	c1.display();
	c2.display();


	return 0;
}
