
#include <iostream>
using namespace std;

void swapit(int &a,int &b)
{
    a=a-b;
    b=a+b;
    a=b-a;
}

void bubsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapit(arr[j],arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[]={6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
