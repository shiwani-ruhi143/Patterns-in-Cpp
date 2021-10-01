#include<iostream>
using namespace std;
int fact(int n)
{
    int fac=1;
    for(int i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    return fac;
}
int main()
{
    int num,i,j,space;
    cin>>num;
    space=num-1;
    for(i=0;i<num;i++)
    {
        for(int j=0;j<space;j++)
            cout<<" ";
        space--;
        for(j=0;j<=i;j++)
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        cout<<endl;
    }
    return 0;
}
