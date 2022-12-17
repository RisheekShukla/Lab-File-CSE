#include<iostream>
using namespace std;
class Time {
	int hours;
	int minutes;
	public:
		void gettime(int h,int m)
		{
			hours= h; minutes=m; 
		}
		void puttime(void)
		{
			cout<<hours<<" hours and ";
			cout<<minutes<<" minutes "<<endl;
		}
		
		Time operator +(Time t1)
		{
		    Time t;
        	t.minutes=minutes + t1.minutes;
        	t.hours=t.minutes/60;
        	t.minutes = t.minutes % 60;
        	t.hours = t.hours + hours + t1.hours;
        	return t;
        }
};

int main()
{
    Time T1,T2,T3;
    T1.gettime(2,45);
    T2.gettime(3,30);
    T3=T1+T2;
    cout<<"T1 = "; T1.puttime();
    cout<<"T2 = "; T2.puttime();
    cout<<"T3 = "; T3.puttime();
    
return 0;
}
