#include<iostream>
using namespace std;

class shape
{
    protected:
        float area;
    public:
        virtual void getarea(){};
        virtual void show(){};
};

class circle : public shape
{
    float r;
    public:
        void getarea()
        {
            cout<<"Enter Radius of the circle:";
            cin >>r;
            area = 3.14*r*r;
        }
        void show()
        {
            cout<<"Circle area = "<<area<<"\n";
        }
};

class square : public shape
{
    float a;
    public:
    void getarea()
    {
        cout << "Enter side of square:";
        cin >> a ;
        area = a*a;
    }
    void show()
    {
        cout<<"Square Area = "<<area<<"\n";
    }
};

class rectangle : public shape
{
    float l,b;
    public:
    void getarea()
    {
        cout << "\nRectangle\n";
        cout << "Enter length: ";
        cin >> l ;
        cout << "Enter breadth: ";
        cin >> b ;
        area = l*b;
    }
    void show()
    {
        cout<<"Rectangle Area = "<<area<<"\n";
    }
};

class ellipse : public shape
{
    float a1,a2;
    public:
    void getarea()
    {
        cout << "\nEllipse\n";
        cout << "Enter Major Axis length: ";
        cin >> a1 ;
        cout << "Enter Minor Axis length: ";
        cin >> a2 ;
        area = 3.14*a1*a2;
    }
    void show()
    {
        cout<<"Ellipse Area : "<<area<<"\n";
    }
};

int main()
{
    cout << "Choose an option : \n";
    cout << "1 - Circle\n";
    cout << "2 - Square\n";
    cout << "3 - Ellipse\n";
    cout << "4 - Rectangle\n";
    cout << "5 - Exit\n";
    shape *bptr;
    int choice = 0;
    while (choice != 5)
    {
        cout << "\n\nSelect an option : ";
        cin >> choice;
        switch (choice)
        {
            case 1 :
            {
                bptr = new circle;
                bptr ->getarea();
                bptr ->show();
                break;
            }
            case 2 :
            {
                bptr = new square;
                bptr ->getarea();
                bptr ->show();
                break;
            }
            case 3 :
            {
                bptr = new ellipse;
                bptr ->getarea();
                bptr ->show();
                break;
            }
            case 4 :
            {
                bptr = new rectangle;
                bptr ->getarea();
                bptr ->show();
                break;
            }
            case 5 :
            {
                cout << "   \n";
                break;
            }
            default :
            cout << "Invalid option try again\n";
            break;
        }
	char option;
	cout<<"Do you want to continue\nPress y to continue or any other key to exit\n";
	cin>>option;
	if(option!='y')
		break;
    }
	cout<<"\n~~~~~Thank You~~~~~\n";
	return 0;
	
}
