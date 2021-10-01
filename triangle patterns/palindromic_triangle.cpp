#include<iostream>
using namespace std;
int main()
{
    int i,j,rows,num,k;
    cin>>rows;
    for(i=1;i<=rows;i++)
    {    
        k=i;num=1;
        for(j=1;j<=2*rows-1;j++)
        {
            
            if(j>=rows-i+1 && j<rows)
            cout<<k--<<" ";
            else if(j>=rows && j<=rows+i-1)
            cout<<num++<<" ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
}
