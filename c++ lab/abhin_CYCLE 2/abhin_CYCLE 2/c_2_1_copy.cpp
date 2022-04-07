#include <iostream>
#include <cmath>
using namespace std;

class vector
{
    int x;
    int y;
    int z;
    float magnitude;
    public:
    void getdata(void);
    void display(void);
    void display_magnitude(void)
    {
        cout<<"\nMagnitude : "<<magnitude;
    }
    int operator ==(vector);
    int operator !=(vector);
    int operator <(vector);
    int operator <=(vector);
    int operator >(vector);
    int operator >=(vector);
};
void vector :: getdata(void)
{
    cout<<"Entert the x, y, z coardinates of a vector\n";
    cin>>x>>y>>z;
    magnitude=sqrt((x*x)+(y*y)+(z*z));

}

void vector :: display(void)
{
    cout<<"< "<< x << " " << y << " " << z <<" >";
}

int vector :: operator ==(vector v)
{
    if(magnitude == v.magnitude)
        return(1);
    else
        return(0);
}

int vector :: operator !=(vector v)
{
    if(magnitude != v.magnitude)
        return(1);
    else
        return(0);
}

int vector :: operator <(vector v)
{
    if(magnitude<v.magnitude)
        return(1);
    else
        return(0);
}

int vector :: operator <=(vector v)
{
    if(magnitude <= v.magnitude)
        return(1);
    else
        return(0);
}

int vector :: operator >(vector v)
{
    if(magnitude > v.magnitude)
        return(1);
    else
        return(0);
}

int vector :: operator >=(vector v)
{
    if(magnitude >= v.magnitude)
        return(1);
    else
        return(0);
}

int main()
{
    vector v1, v2;
    v1.getdata();
    v2.getdata();
    cout<<"\nVector 1 : "; v1.display();
    v1.display_magnitude();
    cout<<"\n\nVector 2 : "; v2.display();
    v2.display_magnitude();

    int n;
    while(n!=6)
    {
        
        cout<<"\n\nChoose any of the following\n1.Vector operation ==\n2.Vector operation !=\n3.Vector opretion  <\n4.Vector operation <=\n5.Vector operation >\n6.Vector operation >=\n7.Exit            \n";
        cin>>n;

        if(n==1)
        {
            if(v1==v2)
            {
                cout<<"\n\n";
                v1.display();
                cout<<" equal to ";
                v2.display();
                cout<<"\n\n";
            }
            else
            {
                cout<<"\n\n";
                v1.display();
                cout<<" not equal to ";
                v2.display();
                cout<<"\n\n";
            }

            
        }

        else if(n==2)
        {
            if(v1!=v2)
        {
            cout<<"\n\n";
            v1.display();
            cout<<" not equal to ";
            v2.display();
            cout<<"\n\n";

        }
        else
        {
            cout<<"\n\n";
            v1.display();
            cout<<" equal to ";
            v2.display();
            cout<<"\n\n";
        }

        }

        else if(n==3)
        {
            if(v1<v2)
        {
            cout<<"\n\n";
            v1.display();
            cout<<" less than ";
            v2.display();
            cout<<"\n\n";
        }
        else
        {
            cout<<"\n\n";
            v2.display();
            cout<<" less than ";
            v1.display();
            cout<<"\n\n";
        }

        }

        else if(n==4)
        {
            if(v1<=v2)
        {
            cout<<"\n\n";
            v1.display();
            cout<<" less than or equal to ";
            v2.display();
            cout<<"\n\n";
        }
        else
        {
            cout<<"\n\n";
            v2.display();
            cout<<" less than or equal to ";
            v1.display();
            cout<<"\n\n";
        }

        }

        else if(n==5)
        {
            if(v1 > v2)
        {
            cout<<"\n\n";
            v1.display();
            cout<<" greater than ";
            v2.display();
            cout<<"\n\n"; 
        }
        else
        {
            cout<<"\n\n";
            v2.display();
            cout<<" greater than ";
            v1.display();
            cout<<"\n\n";

        }

        }
        else if(n==6)
        {
            if(v1>=v2)
        {
            cout<<"\n\n";
            v1.display();
            cout<<" greater than or equal to ";
            v2.display();
            cout<<"\n\n";

        }
        else
        {
            cout<<"\n\n";
            v2.display();
            cout<<" greater than or equal to ";
            v1.display();
            cout<<"\n\n";
        }

        }
        else
            break;
        char option;
        cout<<"Do you want to continue\nPress Y to continue or any other key to quit\n";
        cin>>option;
        if(option!='Y')
            break;

        }

    cout<<"\n~~~Thank You~~~\n";

    return 0;
}