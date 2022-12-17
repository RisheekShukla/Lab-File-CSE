#include<bits/stdc++.h>
using namespace std;
class math
{   
public:
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
};

int main() {
int leap;
cout<<"Enter the year : ";
cin>>leap;
math m1;
m1.leapyear(leap);
return 0;
}
