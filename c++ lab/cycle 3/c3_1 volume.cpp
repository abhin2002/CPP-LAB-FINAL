#include<iostream>
using namespace std;

class shape
{
    protected:
        float volume;
    public:
        virtual void getvolume()=0;
        virtual void show()=0;
};

class circle : public shape
{
    float r;
    public:
        void getvolume()
        {
            cout<<"Enter Radius of the circle : ";
            cin >>r;
            volume = 1.33*r*r*r;
        }
        void show()
        {
            cout<<"Circle volume = "<<volume<<"\n";
        }
};

class square : public shape
{
    float a;
    public:
    void getvolume()
    {
        cout << "Enter side of square : ";
        cin >> a ;
        volume = a*a*a;
    }
    void show()
    {
        cout<<"Square Volume = "<<volume<<"\n";
    }
};

class rectangle : public shape
{
    float l,b,h;
    public:
    void getvolume()
    {
        cout << "\nRectangle\n";
        cout << "Enter length  : ";
        cin >> l ;
        cout << "Enter breadth : ";
        cin >> b ;
        cout<<"Enter height    : ";
        cin>>h;
        volume = l*b*h;
    }
    void show()
    {
        cout<<"\nRectangle Volume = "<<volume<<"\n";
    }
};


int main()
{
    cout << "Choose an option : \n";
    cout << "1 - Circle\n";
    cout << "2 - Square\n";
    cout << "3 - Rectangle\n";
    cout << "4 - Exit\n";
    shape *bptr;
    int choice = 0;
    while (choice != 4)
    {
        cout << "\n\nSelect an option : ";
        cin >> choice;
        switch (choice)
        {
            case 1 :
            {
                bptr = new circle;
                bptr ->getvolume();
                bptr ->show();
                break;
            }
            case 2 :
            {
                bptr = new square;
                bptr ->getvolume();
                bptr ->show();
                break;
            }
            case 3 :
            {
                bptr = new rectangle;
                bptr ->getvolume();
                bptr ->show();
                break;
            }
            case 4 :
            {
                cout << "   \n";
                break;
            }
            
            default :
            cout << "\nInvalid option try again\n";
            break;
        }
	char option;
	cout<<"\nDo you want to continue\nPress y to continue or any other key to exit\n";
	cin>>option;
	if(option!='y')
		break;
    }
	cout<<"\n~~~~~Thank You~~~~~\n";
	return 0;
	
}
