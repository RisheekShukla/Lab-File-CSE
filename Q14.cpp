#include<iostream>
using namespace std;
class Ancestors
{
    public:
    void hardwrk()
    {
        cout<<"Experience"<<endl;
    }
};

  class Father:public virtual Ancestors
  {
   public:
   
};

  class Mother :public virtual Ancestors
  {
    public:
};

class child :  public Father,  public Mother {
    public:
     void sdfgh(){
         cout<<"I have "<<endl;
     }
};
int main() 
{
child c1;
c1.sdfgh();
c1.hardwrk();
return 0;
}
