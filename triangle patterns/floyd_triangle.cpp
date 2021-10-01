#include<iostream>
using namespace std;
int main()
{
    int i,j,rows,num=1;
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<num<<" ";
            num++;
        }
           
        cout<<endl;
    }
    return 0;
}
