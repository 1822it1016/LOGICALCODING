#include<iostream>
#include<string.h>
using namespace std;
int main()
{   int i;
    char ch[100];
    gets(ch);
    for(i=0;ch[i]!=' ';i++);
        for (int j = i-1; ch[j]!=NULL ; j++)
        {
            cout<<ch[j];
        }
        return(0);
    
}