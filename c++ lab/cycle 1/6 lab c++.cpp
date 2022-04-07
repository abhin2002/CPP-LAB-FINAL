#include <iostream>
using namespace std;

class TIME
{
	int hours;
	int minutes;
	int seconds;

public:
	void input();
	void display()
	{
		cout << hours << "hours , ";
		cout << minutes << " minutes and ";
		cout << seconds << "seconds"<<endl;
	}
	void sum(TIME, TIME);
};

void TIME :: input()
{
	cout << "Enter the hours   : ";
	cin >> hours;
	cout << "Enter the minutes : ";
	cin >> minutes;
	cout << "Enter the seconds : ";
	cin >> seconds;
}

void TIME :: sum(TIME t1, TIME t2)
{
	seconds = t1.seconds + t2.seconds;
	minutes = seconds/60;
	seconds = seconds%60;
	minutes = minutes + t1.minutes + t2.minutes;
	hours   = minutes/60;
	minutes = minutes%60;
	hours   = hours + t1.hours +t2.hours;
}

int main()
{
	TIME T1, T2, T3;
	T1.input();
	T2.input();
	T3.sum(T1, T2);

	cout << "Time 1     = "; T1.display();
	cout << "Time 2     = "; T2.display();
	cout << "Total Time = "; T3.display();

	return 0;
}
