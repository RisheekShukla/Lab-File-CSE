#include<iostream>
using namespace std;
class SPEAKER{
    public:
    void sound()
    {
        cout<<"speaker check"<<endl;
    }
};

class HEADPHONE
{
    public:
    void checkit(){
        cout<<"headphone CHECK"<<endl;
    }
};

class phone:public SPEAKER,public HEADPHONE 
{
    public:
    phone(int a)
    {
        cout<<"THE VALUE of A IS : "<<a<<endl;
    }

};
int main() 
{
phone m1(33);
m1.checkit();
m1.sound();
return 0;
}
