#include<iostream>
using namespace std;
class BARBOSA {
public:
	// Non Parameterized Constructor
 BARBOSA(){
        cout<<"constructor called successfully"<<endl;
    }
	// Parameterized Constructor
 BARBOSA(int i)
 {
     cout<<"I am called with "<<i<<endl;
 }
	// Destructor
~BARBOSA()
{
    cout<<"I am destructor"<<endl;
}
};

int main()
{
    BARBOSA b1(5);
    BARBOSA b2;
}
