#include<iostream>
using namespace std;
int main()
{
 
  char ch;
  cout<<"Enter any Alphabet :\n";
  cin>>ch;

 if(ch>='a'&&ch<='z')
 {
   cout<<"\nYou Entered A Lowercase Alphabet\n";
   ch=ch-32;
   cout<<"\nThe uppercase alphabet is "<<ch;
 }
 else
 {
   cout<<"\nYou Entered An Uppercase Alphabet\n";
   ch=ch+32;
   cout<<"\nTe Lowercase Alphabet Is "<<ch;
 }
 cout<<endl;
 return 0;

}