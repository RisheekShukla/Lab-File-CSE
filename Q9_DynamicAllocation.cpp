#include<iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    // Dynamically allocated array 
    int *p=new int [t];
    for(int n=0;n<t;n++){
    cin>>*(p+n);
    }
    // Printing it
    for(int n=0;n<t;n++){
    cout<<*(p+n)<<" ";
    }
    delete []p;
return 0;
}
