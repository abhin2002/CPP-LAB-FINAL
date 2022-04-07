//============================================================================
// Name        : lab.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class stc_fn_cnt
{
	int sample;
	static int count;
public:
	void set(void){sample = ++count;}
	void show(void){cout<<"Object number : "<<sample<<"\n";}
	static void showcount(void){cout<<"count : "<<count<<"\n";}

};
int stc_fn_cnt::count;

int main()
{
	stc_fn_cnt s1, s2;

	s1.set();
	s2.set();

	stc_fn_cnt::showcount();

	stc_fn_cnt s3;
	s3.set();

	stc_fn_cnt::showcount();

	s1.show();
	s2.show();
	s3.show();

	return 0;
}
