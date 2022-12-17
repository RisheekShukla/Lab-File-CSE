#include<bits/stdc++.h>
using namespace std;

class MATHS 
{
    int a,b;
    public:
    MATHS(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    int addition()
    {
        return a+b;
    }
    int subtract()
    {
        return a-b;
    }
    int multiply()
    {
        return a*b;
    }
    float division()
    {
        return float(a)/float(b);
    }
};

int main()
{
  MATHS m1(5,3);
  cout<<m1.addition()<<endl;
  cout<<m1.subtract()<<endl;
  cout<<m1.multiply()<<endl;
  cout<<m1.division()<<endl;
return 0;
}
