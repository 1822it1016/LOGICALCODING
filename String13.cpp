#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char c1[100],c2[100];
    gets(c1);
    gets(c2);
    int c=strcmpi(c1,c2);
    if(c<0)
    cout<<c1;
    else if (c>0)
    {
        cout<<c2;

    }
    else
    {
        cout<<"both are same";
    }
    

}