#include <iostream>
using namespace std;

class person
{
    protected:
        string name;
    public:
        person(){}
        person(string a)
        {
            name = a;
        }
        void put_number(void)
        {
            cout<<"Name            : "<< name <<endl;
        }    
};

class employee : public person
{
    protected:
        int id, Bpay;
    public:
        employee(){}
        employee(string a, int t1, int t2) : person(a)
        {
            id = t1;
            Bpay = t2;
        } 
        void put_details(void)
        {
            cout<<"Employee details: "<<endl
                <<"ID Card Number  : " <<id<<endl
                <<"Basic Pay       : " <<Bpay<<endl;
        }

};

class part_time
{
    protected:
        int bonus;
    public:
        part_time(){}
        part_time(int s)
        {
            bonus = s;
        }
        void put_bonus(void)
        {
            cout<<"Bonus           : "<<bonus<<"\n\n";
        }
};

class engeneer : public employee, public part_time
{
    float salary;
    public:
    engeneer(){}
    engeneer(string a, int t1, int t2, int s) : part_time(s),employee(a, t1, t2)
    {
        salary= Bpay + bonus;
    }
    void display(void);
};

void engeneer :: display(void)
{
    put_number();
    put_details();
    put_bonus();

    cout<<"Total Income    : "<<salary<<endl;
}

int main()
{
    string name;
    int t1, t2, s;
    cout<<"Welcome\n\n";
    cout<<"Enter the following details.\n\n";
    cout<<"Name                        : ";
    cin>>name;
    cout<<"Enter the ID number         : ";
    cin>>t1;
    cout<<"Enter the Bonus Amound      : ";
    cin>>t2;
    cout<<"Enter the Basic Pay         : ";
    cin>>s;
    engeneer e1(name,t1, t2, s);
    cout<<"\n============================\n";
    e1.display();
    cout<<"\n============================\n";

    return 0;
}