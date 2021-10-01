#include<iostream>
using namespace std;
int main()
{
    int i,j,rows,col;
    cin>>rows>>col;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=col;j++)
           cout<<"* ";
        cout<<endl;   
    }
    return 0;
}
