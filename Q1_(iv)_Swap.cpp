#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int a,b;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number:  ";
    cin>>b;
    // swapping condition        (a=3,b=2)
    a = a - b ;  // 1 = 3 - 2    (a=1,b=2)
    b = a + b ;  // 3 = 1 + 2    (a=1,b=3)
    a = b - a ;  // 2 = 3 - 1    (a=2,b=3)
    cout<<"First Number is "<<a<<" & Second Number is "<<b<<endl;
    return 0;
}
