# Author : M Daffa
# Team   : Black Coder Crush

#include<iostream.h>
#include<stdio.h>
#include<conio.h>


main()
{
int A,i,j,jum;
cout<<"input :";cin>>A;
for(i=1;i<=A;i+=2)
{
 jum=1;
 for(j=1;j<=i;j+=2)
 {
 if(j!=1)
 cout<<" * ";
 cout<<j;
 jum*=j;
 }
cout<<"= "<<jum<<endl;
}
cout<<endl;
getch();
}
