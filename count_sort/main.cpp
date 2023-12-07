#include<iostream>
using namespace std;

int Max(int A[],int n)
{
    int max=A[0];
    for(int i=1;i<n;i++)
        if(A[i]>max)
            max=A[i];
    return max;
}

void CountSort(int A[],int n)
{
    int i,j=0,max;
    max=Max(A,n);
    int *p=(int*)malloc(sizeof(int)*(max+1));
    for(i=0;i<max+1;i++)
        p[i]=0;
    for(i=0;i<n;i++)
        p[A[i]]++;
    i=0;
    while(i<=max)
    {
        if(p[i]!=0)
        {
            A[j++]=i;
            p[i]--;
        }
        else
            i++;
    }
}

void Display(int A[],int n)
{
    cout<<"The sorted elements are given by : "<<endl;
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
}

int main()
{
    cout<<"Enter the number of elements in the array : "<<endl;
    int n;
    cin>>n;
    int A[100];
    cout<<"Enter the elements in the array : "<<endl;
    for(int i=0;i<n;i++)
        cin>>A[i];
    CountSort(A,n);
    Display(A,n);
    return 0;
}
