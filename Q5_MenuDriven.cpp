#include<bits/stdc++.h>
using namespace std;

void add_times()
{
    int h1,h2,m1,m2,s1,s2;
    cout<<"Enter timestamp 1 "<<endl;
    cout<<"Enter hours : ";
    cin>>h1;
    cout<<"Enter minutes : ";
    cin>>m1;
    cout<<"Enter seconds : ";
    cin>>s1;
    cout<<"Enter timestamp 2 "<<endl;
    cout<<"Enter hours : ";
    cin>>h2;
    cout<<"Enter minutes : ";
    cin>>m2;
    cout<<"Enter seconds : ";
    cin>>s2;
    int sec,min,hrs;
    sec=s1+s2;
    min=m1+m2+(sec/60);
    hrs=h1+h2+(min/60);
    min=min%60;
    sec=sec%60;
    cout<<"The added time is : "<<hrs<<" : "<<min<<" : "<<sec<<endl;
}

void add_distance()
{
    int sumf;
    float sumi;
    int f1,f2;
    float i1,i2;
    cout<<"Enter 1st distance"<<endl;
    cout<<"feet : ";
    cin>>f1;
    cout<<"inch : ";
    cin>>i1;
    cout<<"\nEnter 2nd distance"<<endl;
    cout<<"feet : ";
    cin>>f2;
    cout<<"inch : ";
    cin>>i2;
    sumf = f1+f2;
    sumi = i1+i2;
    if(sumi > 12) {
        int extra = sumi / 12;

        sumf += extra;
        sumi -= (extra * 12);
    } 
    cout<<"sum is "<<sumf<<" and "<<sumi<<endl;
}

class STUDENT {
protected:
	string name,course;
	public:
		void student_info()
		{
		cout<<"ENTER NAME"<<endl;
	    cin>>name;
		cout<<"ENTER YOUR COURSE"<<endl;
		cin>>course;
		}
		void display_std_info()
		{
			cout<<"Name : ";
			cout<<name<<endl;
			cout<<"Course : "<<course<<endl;
		}
};

void student_call()
{
    STUDENT objr;
	objr.student_info();
	objr.display_std_info();
}

class BOOK
{
	int BOOKNO;
	string BOOKTITLE;
	float PRICE;
	public:
	
	void TOTAL_COST()
	{
	    int quant;
	    cout<<"Quantity : ";
	    cin>>quant;
		float tcost;
		tcost=PRICE*quant;
		cout<<tcost<<endl;
	}

	void INPUT()
	{
		cout<<"Enter Book Number ";
		cin>>BOOKNO;
		cout<<"Enter Book Title ";
		cin>>BOOKTITLE;
		cout<<"Enter price per copy ";
		cin>>PRICE;
	}
};

void bookcall()
{
    BOOK b1;
    b1.INPUT();
    b1.TOTAL_COST();
}

int main()
{
  
   int t;
   while(1)
   {
       cout<<"1.Addition of two times\n2.Addition of two distances\n3.Student Details\n4.Book Details\n5.Exit"<<endl;
       cout<<"Enter Your Choice : ";
       cin>>t;
       switch(t)
       {
       case 1:
       add_times();
       break;
       case 2:
       add_distance();
       break;
       case 3:
       student_call();
       break;
       case 4:
       bookcall();
       break;
       case 5:
       exit(4);
       break;
   }
}
return 0;
}
