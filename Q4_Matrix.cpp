#include<bits/stdc++.h>
using namespace std;
#define N 3


void add(int A[][N], int B[][N])
{
    int C[N][N];
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            C[i][j] = A[i][j] + B[i][j];
            
    cout << "Addition of matrix is " << endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }
    
}

void subtract(int A[][N], int B[][N])
{
    int C[N][N];
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            C[i][j] = A[i][j] - B[i][j];
    cout << "Subtraction of matrix is " << endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }
}

void mulMat(int mat1[][N], int mat2[][N])
{
    int rslt[N][N];
 
    cout << "Multiplication of given two matrices is:\n";
 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            rslt[i][j] = 0;
 
            for (int k = 0; k < N; k++) {
                rslt[i][j] += mat1[i][k] * mat2[k][j];
            }
 
            cout << rslt[i][j] << "\t";
        }
 
        cout << endl;
    }
}

void transpose(int A[][N], int B[][N])
{
    int C[N][N];
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            B[i][j] = A[j][i];
    cout << "Transpose of matrix is " << endl;
     for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }
}

int main()
{
       int a[3][3],b[3][3];
   cout<<"Enter the elemtents of matrix A"<<endl;
   for(int i=0;i<3;i++)
   {
      for(int j=0;j<3;j++)
      {
        cin>>a[i][j];
      }
   }
   cout<<"Enter the elements of matrix B"<<endl;
   for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
    {
        cin>>b[i][j];
    }
   }
   int t;
   while(1)
   {
       cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Transpose\n5.Exit"<<endl;
       cout<<"Enter Your Choice : ";
       cin>>t;
       switch(t)
       {
       case 1:
       add(a,b);
       break;
       case 2:
       subtract(a,b);
       break;
       case 3:
       mulMat(a,b);
       break;
       case 4:
       transpose(a,b);
       break;
       case 5:
       exit(4);
       break;
   }
}
return 0;
}
