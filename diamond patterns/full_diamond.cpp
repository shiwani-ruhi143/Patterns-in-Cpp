#include<iostream>
using namespace std;
int main()
{
    int i,j,rows,num=1;
    cin>>rows;
    for(i=1;i<=rows;i++)
    {    
        for(j=1;j<=2*rows-1;j++)
        {
            if(j<=rows+i-1 && j>=rows-i+1)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    for(i=rows;i>=1;--i)
    {    
        for(j=1;j<=2*rows-1;j++)
        {
            if(j<=rows+i-1 && j>=rows-i+1)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
}
