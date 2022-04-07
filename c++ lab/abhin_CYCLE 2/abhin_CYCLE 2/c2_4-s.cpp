#include<iostream>
using namespace std; 
class matrix
{
               float **m;
               int row,col;
               public:
                matrix(){}
                matrix(int r,int c);
                void input();
                void display();
                matrix operator+(matrix M);
                matrix operator*(matrix M);
};
 
 matrix::matrix(int r,int c)
{
            row=r;
            col=c;
            m=new float *[r];
            for(int i=0;i<r;i++)
           m[i]=new float[col];
}
void matrix::input()
{
    cout<<"Enter matrix elements row by row \n";
    for(int i = 0 ; i <row ; i++){
        for(int j = 0; j <col; j++){
            int value;
            cin >> value;
            m[i][j] =value;
        }
    }
}

void matrix::display()
{
    for(int i = 0 ; i <row ; i++){
        for(int j = 0; j <col; j++){
            cout << m[i][j] << " " ;
        }
        cout << "\n" ;
    } 
}

matrix matrix::operator+(matrix M)
{
             
              matrix mt(row,col);
              for(int i=0;i<row;i++)
               {
                   for(int j=0;j<col;j++)
                               {
                              mt.m[i][j]=m[i][j]+M.m[i][j];
                      }
                }
      return mt;
}
 
 
matrix matrix::operator*(matrix M)
{
           matrix mt(row,M.col);
 
     for(int i=0;i<row;i++)
          {
                for(int j=0;j<M.col;j++)
                 {
                        mt.m[i][j]=0;
                        for(int k=0;k<M.row;k++)
                        mt.m[i][j]+=m[i][k]*M.m[k][j];
                 }
         }
 
      return mt;
  }
int main()
{
     
    int r1,c1,r2,c2;
    cout<<" Enter row and column of first matrix : ";
    cin>>r1>>c1;
    matrix m1(r1,c1);
    m1.input();
    cout<<" Enter row and column of second matrix : ";
    cin>>r2>>c2;
    matrix m2(r2,c2);
    m2.input();
    cout<<endl<<endl;
    if(r1==r2 && c1==c2)
    {  
        matrix m3(r1,c1);
        m3=m1+m2;
        cout<<" m1 + m2: "<<endl;
        m3.display();
    }
    else
    cout<<" Summation  is not possible"<<endl<<endl;
    if(c1==r2)
    {            
        matrix m5(r2,c1);
        m5=m1*m2;
        cout<<" m1 x m2: "<<endl;
        m5.display();
    }
    else
    cout<<" Multiplication is not possible "<<endl;
    return 0;
}
