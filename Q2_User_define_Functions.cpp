#include<bits/stdc++.h>
using namespace std;

int addition(int a,int b)
{
    return a+b;
}
int subtract(int a,int b)
{
    return a-b;
}
int multiply(int a,int b)
{
    return a*b;
}
float division(int a,int b)
{
    return a/b;
}

int main() 
{
    int a,b;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number:  ";
    cin>>b;
    cout<<"Addition : "<<addition(a,b)<<endl;
    cout<<"Subtraction : "<<subtract(a,b)<<endl;
    cout<<"Multiplication : "<<multiply(a,b)<<endl;
    cout<<"Division : "<<division(a,b)<<endl;
}
