#include<bits/stdc++.h>
using namespace std;
void ref_swap(int &n1, int &n2) 
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}
void val_swap(int &n1, int &n2) 
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main()
{
    int a,b;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number:  ";
    cin>>b;
    cout<<"Call By Value"<<endl;
    val_swap(a,b);
    cout<<" A is : "<<a<<endl;
    cout<<" B is : "<<b<<endl;
    cout<<"Call by reference"<<endl;
    ref_swap(a,b);
    cout<<" A is : "<<a<<endl;
    cout<<" B is : "<<b<<endl;
}
