#include <iostream>
#include <cstring>
using namespace std;

class student
{
	string name;
	int roll_no;
	float mark1, mark2, mark3;
	char grade;
	float avg_mark;

public:
	void input();
	void calcGrade();
	void display();
};

void student :: input()
{
	cout<<"~~~~~~Find the grade of student~~~~~~\n";
	cout <<"Enter the Name                           : ";
	cin >>name;
	cout <<"Enter the Roll number                    : ";
	cin >>roll_no;
	cout <<"Enter the Marks of 3 subjects out of 100 : \n";
	cin >>mark1>>mark2>>mark3;
}

void student :: calcGrade()

{
	avg_mark = (mark1+mark2+mark3)/3;

	if(avg_mark > 90)
	{
		grade = 'A';
	}
	else if(80 < avg_mark and avg_mark <= 90)
	{
		grade = 'B';
	}
	else if(70 < avg_mark and avg_mark <= 80)
	{
		grade = 'C';
	}
	else if(60 < avg_mark and avg_mark <= 70)
	{
		grade = 'D';
	}
	else if(50 < avg_mark and avg_mark<= 60)
	{
		grade = 'E';
	}
	else
		{
		grade = 'F';
		}
}

void student :: display()
{
	cout<<"~~~~~~~Student Report~~~~~~~\n";
	cout<<"Student Name      : "<<name<<endl;
	cout<<"Roll no           : "<<roll_no<<endl;
	cout<<"Mark of subject 1 : "<<mark1<< "\nMark of subject 2 : "<<mark2<<"\nMarl of subject 3 : "<<mark3<<endl;
	cout<<"Average Mark      : "<<avg_mark<<endl;
	cout<<"Total Grade       : "<<grade<<endl;
}

int main()
{
	student *X;
	int n;
	cout<<"Enter the total number of students : ";
        cin>>n;
	X= new student[n];
	int i=0;
 while(i<n)
{		
		
	
	X[i].input();
	X[i].calcGrade();
	X[i].display();
	i++;
	char c;
	cout<<"\nDo yu want to continue\nPress y for continue or any other key to quit";
	cin>>c;
	if(c!='y')
		break;
      
 }  

 cout<<"**** THANK YOU ****\n";


	return (0);
}
