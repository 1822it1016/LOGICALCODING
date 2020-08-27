#include<iostream>
using namespace std;
int main()
{   int i=0;
    char a[1000];
    gets(a);
    while (a[i]!=NULL)
    {
        if(a[i].isupper==0)
        cout<<a[i];

    }
    return(0);
}