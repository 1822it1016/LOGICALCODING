#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main()
{
    int i;
    int upper=0,lower=0;
    char ch[100];
    cout<<"Enter the String:\n";
    gets(ch);
    i=0;
    while(ch[i]!=0){
if(ch[i]>='A' && ch[i]<='Z'){
    upper++;
}
else if(ch[i]>='a' && ch[i]<='z'){
    lower++;
}
i++;
    }
cout<<"lowercase letters: "<<lower;
cout<<"\nuppercase letters: "<<upper;
getch();
    return 0;
}