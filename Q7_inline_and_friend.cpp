#include<iostream>
using namespace std;
class SUM;

class ADDITION {
int a,b;
public:
void freezeval(int X,int Y){
a=X;
b=Y;
}
friend void add(ADDITION);
};



void add(ADDITION t)
{
    cout<<"THE SUM IS "<<t.a+t.b<<endl;
}

inline int add1(int a,int b)
{
    return a+b;
}

int main() 
{
ADDITION p;
p.freezeval(10,20);
add(p);
cout<<"\n"<<add1(12,22);
return 0;
}
