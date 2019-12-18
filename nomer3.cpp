# Author : M Daffa
# Team   : Black Coder Crush

#include<iostream.h>
#include<conio.h>


main()
{
 int A,i,j,jum;


 for (i=1;i<=4;i++)
 {
  jum=0;
  for (j=1;j<=i;j++)
  {
   if (j != 1)
   cout<<"+";
   cout<<j;
   jum +=j;
  }
  cout<<"\t\t=  "<<jum<<endl;
 }


 for (i=5;i==5;i++)
 {
  jum=0;
  for (j=1;j<=i;j++)
  {
   if (j != 1)
   cout<<"+";
   cout<<j;
   jum +=j;
  }
  cout<<"\t=  "<<jum<<endl;
 }


 getch();
}
