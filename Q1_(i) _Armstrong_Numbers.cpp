
#include <bits/stdc++.h>
using namespace std;

bool armstrong(int sample,int n)
{
    int arr[n];
    int sum=0;
    int x = sample;
  
    for(int i=0;i<n;i++)
    {
            if(sample>0)
        {
            arr[i]=sample%10;
            sample = sample/10;
        }
        sum = sum+pow(arr[i],n);
    }
    if(sum == x)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout<<"-------------- Program for Armstrong Numbers --------------"<<endl;
    int num,dig;
    cout<<"Enter the number of digits : ";
    cin>>dig;
    cout<<"Enter a "<<dig<<" digit number : ";
    cin>>num;
   if(armstrong(num,dig))
   {
       cout<<" It is Armstrong"<<endl;
   }
   else cout<<"No its not an Armstrong "<<endl; 
   cout<<endl;
}
