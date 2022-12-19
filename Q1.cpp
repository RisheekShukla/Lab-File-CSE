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

void arm_main()
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

void leapyear(int leap){
    	if((leap/100)>10)
    {
        if(leap%4==0)
      {
        cout<<"Yes it is a leap year" <<endl;
    	}
        else
        {cout<<leap<<" is not a leap year\n"<<endl;
        }
    }
    else
    {cout<<"Please Enter valid number"<<endl;}
}

void leap_main() {
        cout<<"-------------- Program for leapyear  --------------"<<endl;
    int leap;
    cout<<"Enter the year : ";
    cin>>leap;
    leapyear(leap);
}

void swap_main() 
{
        cout<<"-------------- Program for Swapping Numbers --------------"<<endl;
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
}

void Fibo(int p){
    static int r1=0,r2=1,r3;    
    if(p>0){    
         r3 = r1 + r2;    
         r1 = r2;    
         r2 = r3;    
         cout<<r3<<" ";    
         Fibo(p-1);    
    }
    cout<<endl;
}

void fibo_main() 
{       cout<<"-------------- Program for Fibonacci Series --------------"<<endl;
    int n;
  cout<<"Enter the number till which you wanna your fibo end "<<endl;
  cin>>n;
  cout<<"0 1 ";
  Fibo(n-2);
  cout<<endl;
}

void palindrome(int num){
    int n,digit,rev=0;
    n=num;
    do{
    	digit = num%10;
    	rev=(rev*10)+digit;
    	num=num/10;
    }
    while(num!=0);
    cout<<"The reverse of the number is :"<<rev<<endl;
    if(n==rev){
    	cout<<"THE NUMBER IS A PALINDROME"<<endl;
    }
    else
    cout<<"no its not a palindrome"<<endl;
}
 
void pal_main(){
        cout<<"-------------- Program for Palindrome Numbers --------------"<<endl;
 	int num;
 	cout<<"ENTER THE NUMBER"<<endl;
 	cin>>num;
 	palindrome(num);
 }
 
 int main()
 {
     int p;
     while(1)
     {
                cout<<"-------------- MENU --------------"<<endl;
                cout<<"1. Program for Armstrong Number"<<endl;
                cout<<"2. Program for Palindrome Number"<<endl;
                cout<<"3. Program for Leap year"<<endl;
                cout<<"4. Program for Fibonacci series up to given term"<<endl;
                cout<<"5. Swapping without using third variable"<<endl;
                cout<<"6. Exit "<<endl;
                cout<<"Enter the choice : ";
                cin>>p;
                switch(p)
                {
                    case 1:
                    arm_main();
                    break;
                    case 2:
                    pal_main();
                    break;
                    case 3:
                    leap_main();
                    break;
                    case 4:
                    fibo_main();
                    break;
                    case 5:
                    swap_main();
                    break;
                    case 6:
                    exit(5);
                    break;
                }
     }
 }
