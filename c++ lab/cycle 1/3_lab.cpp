#include <iostream>
#include <string>
using namespace std;

int cnt=1;

class bank
{
	char cust_name[30], acc_type[30];
	int acc_no;
	float balance;
public:
	void add_acc();
	void withdrow();
	void deposit();
	void balnc_enqr();
	void acc_stmnt();
};


void bank::add_acc()
{
	acc_no=cnt;
	cout <<"Enter the account holder name : ";
	cin >>cust_name;
	cout <<"Enter the account type        : ";
	cin>>acc_type;
	cout <<"Enter the total deposited amount(minimum 500) : ";
	cin>>balance;
	
	while(balance<500)
	{
		cout<<"\nInvalid Entry\n";
		cout <<"Enter the total deposited amount(minimum 500) : ";
	cin>>balance;
	}
	cout<<"AC No : "<<acc_no;
}

void bank ::withdrow()
{
	int b;
	cout<<"Enter the amount to withdraw : ";
	cin>>b;
	if(balance>= (b+500))
		balance=balance-b;
	else{
		cout<<"Insufficient balance\n";
		}
	cout<<"Current Balance : "<<balance;
}


void bank :: deposit()
{
	float b;
	cout<<"Enter the amount to deposit : ";
	cin >>b;
	balance=balance+b;
	cout<<"Currrent Balance : "<<balance;

}

void bank::balnc_enqr()
{

	cout<<"Balance : "<<balance;
}

void bank::acc_stmnt()
{
	cout<<"\n\n";
        cout<<"-----------------------------------------";
        cout<<"    \n~~~ACCOUNT STATEMENT~~~";
	cout<<"\n";
	cout<<"\nName    : "<<cust_name<<endl;
	cout<<"\nAC No   : "<<acc_no<<endl;
	cout<<"\nAC Type : "<<acc_type<<endl;
	cout<<"\nBalance : "<<balance<<endl;
	cout<<"-----------------------------------------";
}

int main()
{
	bank cust[100];
	int n=0, ac_no;
	string is_continue="Y";
	while(is_continue=="Y")
	{
		cout<<"\nYou can do the following"<<"\nEnter the appropriate number";
		cout<<"\n1 : Add an AC ";
		cout<<"\n2 : Withdraw";
		cout<<"\n3 : Deposit ";
		cout<<"\n4 : Balance enquiry";
		cout<<"\n5 : AC Statement ";
		cout<<"\nWhat is your option? : ";

		cin>>n;
		if(n==1){
			cust[cnt].add_acc();
			cnt=cnt+1;
		}
		else if(1<n and n<6)
		{
			cout<<"Enter the AC No : ";
			cin>>ac_no;
			if(ac_no>(cnt-1))
			{
				cout<<"           AC No not match.";
			}
			else
			{
				if(n==2)
					cust[ac_no].withdrow();
				else if(n==3)
					cust[ac_no].deposit();
				else if(n==4)
					cust[ac_no].balnc_enqr();
				else if(n==5)
					cust[ac_no].acc_stmnt();
				else
					cout<<"Thank You";

			}
		}
		else
			cout<<"Try Again";

	cout<<"\n\n\nEnter Y to continue or Enter any other key to end the program :";
   cin>>is_continue;	
	}
	cout<<"Thank You\n";

		return 0;
}
