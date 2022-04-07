#include <iostream>
#include <string>
using namespace std;

int const m=50;
int count = 0;

class Items
{
	int itemcode;
	float itemprice;
	string name;
	int stock;
public:
	void getitem(void);
	void displaysum(void);
	void remove(void);
	void displayitems(void);
	void purchase(void);

};

Items order[100];

void Items ::getitem(void)
{
	cout<<"Enter item code  : ";
	cin>> itemcode;

	cout<<"Enter item cost  : ";
	cin>>itemprice;

	cout<<"Enter item name  : ";
	cin>>name;

	cout<<"Enter item stock : ";
	cin>>stock;
	count++;
}

void Items ::displaysum()
{
	float sum = 0;
	for(int i=0; i<count; i++)
	{
		sum = sum + (order[i].itemprice*order[i].stock);
	}
	cout<<"\n\nTotal value : "<<sum<<"\n\n";
}

void Items ::remove()
{
	int a;
	cout <<"Enter item code : ";
	cin>>a;
	int ch=1;
	for(int i=0; i<count; i++)
		if(order[i].itemcode == a){
			order[i].itemprice = 0;
			
			ch=0;
}

if(ch==0){cout<<"\nItem "<<a<<" deleted\n";}
else{cout<<"\nItem not found\n";}
}

void Items ::displayitems()
{
	cout<<"\n==============================";
	cout<<"\nCode\tPrice\tName\tStock ";
	for(int i=0; i<count; i++)
	{
		if(order[i].itemprice!=0){
		cout<<"\n"<<order[i].itemcode;
		cout<<"\t"<<order[i].itemprice;
		cout<<"\t"<<order[i].name;
		cout<<"\t"<<order[i].stock;
		}
	}
	displaysum();
	cout<<"\n==============================";

}

void Items ::purchase()
{
	bool ch=1;
	int Code[50];
	int Quantity[50];
	int cnt=0;
	float total;
	while(ch!=0)
	{
		int a;
		cout<<"Enter the item code : ";
		cin>>a;
		for(int i=0; i<count; i++)
		{
			if(order[i].itemcode == a)
			{
				int b;
				cout<<"Enter the quantity to be removed : ";
				cin>>b;
				if(b<=order[i].stock){
					Code[cnt]=a;
					Quantity[cnt]=b;
					order[i].stock=order[i].stock-b;
					float total = order[i].itemprice*b;
					cnt++;
				}
				else
					cout<<"\nInsufficient Quantity\n";
					
			}
			else
				cout<<"\nInvalid Item Code\n";
			cout<<"\n~~~~~"<<Code[cnt-1]<<Quantity[cnt-1]<<"~~~~~\n";
			cout<<"\nDo you want to continue(0/1)\n";
			cin>>ch;
			if(ch!=1)
				break;
		}
	}
	
}
int main() {
	int x;

	do
	{
		cout<<"\n\nYou can do the following"<<"\nEnter the appropriate number";
		cout<<"\n1 : Add an item ";
		cout<<"\n2 : Delete an item ";
		cout<<"\n3 : Display items ";
		cout<<"\n4 : Purchase ";
		cout<<"\n5 : Quit";
		cout<<"\nWhat is your option?";

		cin>>x;

		switch(x)
		{
		case 1 : order[count].getitem();
		break;
		case 2 : order[count].remove();
		break;
		case 3 : order[count].displayitems();
		break;
		case 4 : order[count].purchase();
		break;
		case 5 : break;
		default : cout <<"Error in input, try again\n ;";
		}
int ch;
cout<<"\nDo you want to continue(0/1)\n";
cin>>ch;
if(ch==0)
	break;
	}while(x!=5);
cout<<"\n~~~Thank You~~~\n";
	return 0;
}
