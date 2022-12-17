#include <bits/stdc++.h>
using namespace std;
int Fibo(int p){
    static int r1=0,r2=1,r3;    
    if(p>0){    
         r3 = r1 + r2;    
         r1 = r2;    
         r2 = r3;    
         cout<<r3<<" ";    
         Fibo(p-1);    
    }    
}

int main() 
{   int n;
  cout<<"Enter the number till which you wanna your fibo end "<<endl;
  cin>>n;
  cout<<"0 1 ";
  Fibo(n-2);

return 0;
}
