//============================================================================
// Name        : cycle.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class student
{
protected:
	int roll_number;
public:
	void get_number(void)
	{
		cout<<"Enter the roll number of the student : "<<endl;
		cin>>roll_number;
	}
	void show_number(void)
	{
		cout<<"Roll No : "<<roll_number<<endl;
	}
};

class test : virtual public student
{
protected:
	float series1, series2;
public:
	void get_marks(void)
	{
		cout<<"Enter the marks of first and second subjects : "<<endl;
		cin>>series1>>series2;
	}
	void show_marks(void)
	{
		cout<<"Marks obtained : "<<endl
				<<"Series 1 : "<<series1<<endl
				<<"Series 2 : "<<series2<<endl;
	}
};

class sports : virtual public student
{
protected:
	float score;
public:
	void get_score(void)
	{
		cout<<"Enter the score : "<<endl;
		cin>>score;
	}
	void show_score(void)
	{
		cout<<"Score : "<<score<<endl<<endl;
	}

};

class result : public test, public sports
{
	float total;
public:
	void display(void);
};

void result::display(void)
{
	total = series1 + series2 + score;

	show_number();
	show_marks();
	show_score();

	cout<<"Total Score : "<<total<<endl;

}

int main()
{
	result student1;
	student1.get_number();
	student1.get_marks();
	student1.get_score();
	student1.display();

	return 0;
}
