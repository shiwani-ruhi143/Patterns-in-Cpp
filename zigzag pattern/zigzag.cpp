#include<iostream>
using namespace std;
int main()
{
    int i,j,cols;
    cin>>cols;
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=cols;j++)
        {
            if((i+j)%2==0)
            cout<<"  ";
            else
            cout<<"* ";
        }
        cout<<endl;
    }
}
