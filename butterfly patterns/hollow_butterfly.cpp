#include<iostream>
using namespace std;
int main()
{
    int i,j,rows;
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=2*rows;j++)
        {
            if(j>=i+1 && j<=2*rows-i)
            cout<<"  ";
            else if(i==j || j==2*rows-i+1 || j==1 || j==2*rows)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    for(i=rows;i>=1;--i)
    {
        for(j=1;j<=2*rows;j++)
        {
            if(j>=i+1 && j<=2*rows-i)
            cout<<"  ";
            else if(i==j || j==2*rows-i+1 || j==1 || j==2*rows)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
}
