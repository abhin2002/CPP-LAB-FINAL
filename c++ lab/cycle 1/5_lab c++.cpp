#include<iostream>
using namespace std;
int cnt=0;
class matrix
{
 int **m;
 int d1,d2;
 public:
  matrix(int x,int y);
  void input(int &i,int &j,int &value)
   {
  m[i][j]=value;
    }
  int get(int i,int j)
   {
  return(m[i][j]);
 }
  void matrix_add(matrix &, matrix &);

~matrix()
  {
    for(int i=0;i<d1;i++)
    {delete m[i];}
    delete m;
   cout<<"Object Destroyed \nMemory Released\n"<<endl;
  }
 };
  matrix::matrix(int x,int y)
 {
  d1=x;
  d2=y;
  m=new int *[d1];
  for(int i=0;i<d1;i++)
    {m[i]=new int [d2];}
  cout<<"Object Created:"<<++cnt<<"\n";
 }
 void matrix:: matrix_add(matrix &a,matrix &b)
 {
  for(int i=0;i<d1;i++)
      { for(int j=0;j<d2;j++)
         {
          m[i][j]=a.m[i][j]+b.m[i][j];
          cout<<m[i][j]<<"  ";
         }
         cout<<endl;
      }
  }

  int main()
  {
  int r1,c1,r2,c2;
     cout<<"Enter the Rows and Columns of the 1st matrix: ";
     cin>>r1>>c1;
     cout<<"\n\tMain Constructors invoked\n";
     matrix A(r1,c1);
     cout<<"Enter the elements in the matrix row by row.\n";
     int i1,j1,value1;
     for(i1=0;i1<r1;i1++)
      { for(j1=0;j1<c1;j1++)
         {
          cin>>value1;
          A.input(i1,j1,value1);
         }
         }
     cout<<"Enter the Rows and Columns of the 2nd matrix: ";
     cin>>r2>>c2;
     matrix B(r2,c2);
     cout<<"Enter the elements in the matrix row by row.\n";
     int i,j,value;
     for(i=0;i<r2;i++)
      { for(j=0;j<c2;j++)
         {
          cin>>value;
          B.input(i,j,value);
         }
         }

    if(r1==r2 && c1==c2)
      {cout<<"The constructor inside the block is invoked.\n";
       matrix C1(r1,c1);
       cout<<"\n\tSum of the two matrix: \n";
       C1.matrix_add(A,B);
       cout<<"\n";}
    else{cout<<"Sum of the two matrices are no possible.\nThey are with different dimensions.\n\n";}
     cout<<"\tMain Destructor invoked\n";
  return 0;
 }
